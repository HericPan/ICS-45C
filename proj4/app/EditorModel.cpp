// EditorModel.cpp
//
// ICS 45C Spring 2021
// Project #4: People Just Love to Play with Words
//
// Implementation of the EditorModel class
#include <iostream>
#include "EditorModel.hpp"
#include "EditorException.hpp"


EditorModel::EditorModel()
    : _cursorLine{1}, _cursorColumn{1}, textContent{"Reserved for 0th line", ""},
        errorMessage{""}
{
    
}


int EditorModel::cursorLine() const
{
    return this->_cursorLine;
}


int EditorModel::cursorColumn() const
{
    return this->_cursorColumn;
}


int EditorModel::lineCount() const
{
    return textContent.size() - 1;
}

int EditorModel::columnCountOfCurrentLine() const
{
    return this->textContent.at(this->_cursorLine).size();
}

int EditorModel::EndOfCurrentLine() const
{
    return this->columnCountOfCurrentLine() + 1;
}

int EditorModel::columnCountOf(int lineNumber) const
{
    return this->textContent.at(lineNumber).size();
}

int EditorModel::EndColumnOf(int lineNumber) const
{
    return this->columnCountOf(lineNumber) + 1;
}


const std::string& EditorModel::line(int lineNumber) const
{
    // track the line's content given by current lineNumber
    return this->textContent.at(lineNumber);
    
}



void EditorModel::addNewLine(int lineNumber, int columnNumber)
{
    // get the content given by lineNumber
    std::string& currentLine = this->textContent.at(lineNumber);
    

    // split the content to two part: before new line and after new line, separated by the two parameter

    // get the first half, since the column starts with 1, have characters with number of n
    std::string firstHalf = currentLine.substr(0, columnNumber - 1);
    // get the second half, since the cursor index on the left side + 1 == the index of first character of the second half
    std::string secondHalf = currentLine.substr(columnNumber - 1);
    
    // make the current line the first half
    currentLine = firstHalf;
    
    // add a new line below, the text is the second
    std::vector<std::string>::iterator it = this->textContent.begin();
    this->textContent.insert(it + lineNumber + 1, secondHalf);

    // set the cursor to the new line's first position
    this->setCursorPosition(lineNumber + 1, 1);
    
}

void EditorModel::insertCharacter(int lineNumber, int columnNumber, char c)
{
    std::string& currentLine = this->textContent.at(lineNumber);
    currentLine.insert(currentLine.begin() + columnNumber - 1, c);
}

void EditorModel::removeCharacter(int lineNumber, int columnNumber)
{
    std::string& currentLine = this->textContent.at(lineNumber);
    currentLine.erase(currentLine.begin() + columnNumber - 1);
}


void EditorModel::insertLine(int lineNumber, std::string lineString)
{
    if (lineNumber == 1 && this->lineCount() == 1 && this->EndColumnOf(1) == 1){
        this->textContent.at(1) = lineString;
    } 
    else 
    {
        this->textContent.insert(textContent.begin() + lineNumber, lineString);
    }
}


void EditorModel::combineTwoLine(int lineNum1, int lineNum2, int columnOffset)
{
    // if (lineNum1 < this->textContent.size() &&) bound checking
    
    std::string& line1 = this->textContent.at(lineNum1);

    // save the size of line1 for later position setting
    // std::size_t line1Offset = line1.size();
    


    const std::string line2 = this->textContent.at(lineNum2);
    // concatencate two lines together
    line1 += line2;
    
    // pop the second line
    this->textContent.erase(this->textContent.begin() + lineNum2);

    // set the cursor to the end of line 1
    this->setCursorPosition(lineNum1, columnOffset);
}

void EditorModel::setLine(int lineNum, const std::string& newline)
{
    std::string& currentLine = this->textContent.at(lineNum);
    currentLine = newline;


}

std::string EditorModel::popLineThenPlaceCursor(int lineNum)
{
    std::string lineToPop = this->line(lineNum);
    std::size_t column = this->_cursorColumn;
    short direction;
    
    
    // determine where to place the cursor
    if (this->lineCount() == lineNum)
    {
        direction = -1; // move to the previous line
    } else 
    {
        direction = 1; // move to the line below
    }
    
    // if the size of line above or line below is smaller than the line to be deleted, set the column to that line's end column
    if (this->EndColumnOf(lineNum + direction) < this->_cursorColumn)
    {
        column = this->EndColumnOf(lineNum + direction);
    }

    this->textContent.erase(this->textContent.begin() + lineNum);

    if (direction == 1){
        this->setCursorPosition(this->_cursorLine, column); // if we use the line below
    } else 
    {
        this->setCursorPosition(this->_cursorLine - 1, column);
    }

    return lineToPop;
}


const std::string& EditorModel::currentErrorMessage() const
{
    return this->errorMessage;
}



void EditorModel::setErrorMessage(const std::string& errorMessage)
{
    this->errorMessage = errorMessage;
}


void EditorModel::clearErrorMessage()
{
    this->errorMessage = "";
}

void EditorModel::setCursorPosition(const int& newLine, const int& newColumn)
{
    this->_cursorLine = newLine;
    this->_cursorColumn = newColumn;
}





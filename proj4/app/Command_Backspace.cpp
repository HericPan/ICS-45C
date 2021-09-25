#include "BooEditLog.hpp"
#include "Command_Backspace.hpp"
#include "EditorException.hpp"

void Command_Backspace::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    booEditLog("executing on Command_Backspace");

    
    if (model.cursorLine() == 1 && model.cursorColumn() == 1) // if already at (1,1), throws
    {
        throw EditorException{"Already at beginning"};
    } else if (model.cursorColumn() == 1) //   if already at the beginning of column, combine two lines
    {
        this->undoChar = '\n';
        int endOfPreviousLine = model.EndColumnOf(model.cursorLine() - 1);
        model.combineTwoLine(model.cursorLine() - 1, model.cursorLine(), endOfPreviousLine);
    } else  // normal situation, just delete that character
    {
        std::size_t charIndex = model.cursorColumn() - 2; // get the index
        // get the line string
        std::string lineString = model.line(model.cursorLine());
        
        this->undoChar = lineString.at(charIndex);
        lineString.erase(lineString.begin() + charIndex);

        model.setLine(model.cursorLine(), lineString);

        model.setCursorPosition(model.cursorLine(), model.cursorColumn() - 1);
    }
    
    // log
}

void Command_Backspace::undo(EditorModel& model) 
{
    // move back fundamental
    // combine the marked line (before new line) and its next line (after new line)
    booEditLog("undoing on Command_Backspace");
    if (this->undoChar == '\n') // if we deleted the line
    {
        model.addNewLine(model.cursorLine(), model.cursorColumn());
    } else  // if it's just normal, add the undo char
    {
        std::size_t charIndex = this->undoColumn - 2; // get the index
        // get the line string
        std::string lineString = model.line(this->undoLine);
        
        
        lineString.insert(lineString.begin() + charIndex, undoChar);
        model.setLine(this->undoLine, lineString);
        model.setCursorPosition(this->undoLine, this->undoColumn);
    }
}
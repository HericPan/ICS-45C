#include "BooEditLog.hpp"
#include "Command_MoveLeft.hpp"
#include "EditorException.hpp"

void Command_MoveLeft::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    // if we already at position first line and first column
    if (model.cursorLine() == 1 && model.cursorColumn() == 1){
        throw EditorException{"Already at beginning"};
    } else if (model.cursorColumn() == 1) // if we are at the beginning of the current line but not the first line, move up to the end of the last column of that line
    {
        model.setCursorPosition(model.cursorLine() - 1, 1); // move up first, column is arbitrarily set to 1
        model.setCursorPosition(model.cursorLine(), model.EndOfCurrentLine()); // now we can call EndOfCurrentLine to set to the end of that line
    } else { 
        // None of above: we only move left fundamental
        booEditLog("executing on Command_MoveLeft");
        model.setCursorPosition(model.cursorLine(), model.cursorColumn() - 1);
    }
}

void Command_MoveLeft::undo(EditorModel& model) 
{
    // move back fundamental
    // note if your command throws exception, this might don't have to undo
    booEditLog("undoing on Command_MoveRight");
    model.setCursorPosition(this->undoLine, this->undoColumn);
}
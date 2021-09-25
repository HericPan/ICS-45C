#include "BooEditLog.hpp"
#include "Command_MoveRight.hpp"
#include "EditorException.hpp"

void Command_MoveRight::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    booEditLog("executing on Command_MoveRight");
    // if we already at position last line and its last column
    if (model.cursorLine() == model.lineCount() && model.cursorColumn() == model.EndOfCurrentLine()){
        throw EditorException{"Already at end"};
    } else if (model.cursorColumn() == model.EndOfCurrentLine()) // if we are at the end of the current line but not the last line, just enter the next line and its first column
    {
        model.setCursorPosition(model.cursorLine() + 1, 1);
    } else {
        // None of above: we only move right fundamental
        model.setCursorPosition(model.cursorLine(), model.cursorColumn() + 1);
    }
}

void Command_MoveRight::undo(EditorModel& model) 
{
    // move back fundamental
    // note if your command throws exception, this might don't have to undo
    booEditLog("undoing on Command_MoveRight");
    model.setCursorPosition(this->undoLine, this->undoColumn);
}
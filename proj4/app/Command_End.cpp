#include "BooEditLog.hpp"
#include "Command_End.hpp"
#include "EditorException.hpp"

void Command_End::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    
    booEditLog("executing on Command_End");
    model.setCursorPosition(model.lineCount(), 1); // first we set to the last line's beginning
    model.setCursorPosition(model.cursorLine(), model.EndOfCurrentLine()); // then set column to end of currentline
    
}

void Command_End::undo(EditorModel& model) 
{
    // move back fundamental
    // note if your command throws exception, this might don't have to undo
    booEditLog("undoing on Command_End");
    model.setCursorPosition(this->undoLine, this->undoColumn);
}
#include "BooEditLog.hpp"
#include "Command_Home.hpp"
#include "EditorException.hpp"

void Command_Home::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    
    booEditLog("executing on Command_Home");
    model.setCursorPosition(1, 1); // directly set to (1,1)
    
}

void Command_Home::undo(EditorModel& model) 
{
    // move back fundamental
    // note if your command throws exception, this might don't have to undo
    booEditLog("undoing on Command_Home");
    model.setCursorPosition(this->undoLine, this->undoColumn);
}
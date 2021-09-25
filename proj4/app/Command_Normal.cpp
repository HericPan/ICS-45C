#include "BooEditLog.hpp"
#include "Command_Normal.hpp"
#include "EditorException.hpp"

Command_Normal::Command_Normal(char input)
    : undoChar(input)
{
}

void Command_Normal::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    // log
    booEditLog("executing on Command_Normal");
    model.insertCharacter(model.cursorLine(), model.cursorColumn(), this->undoChar);
    model.setCursorPosition(model.cursorLine(), model.cursorColumn()+1);
    
}

void Command_Normal::undo(EditorModel& model) 
{
    // move back fundamental
    // note if your command throws exception, this might don't have to undo
    booEditLog("undoing on Command_Normal");
    model.removeCharacter(this->undoLine, this->undoColumn);
    model.setCursorPosition(this->undoLine, this->undoColumn);
}
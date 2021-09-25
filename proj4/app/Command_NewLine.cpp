#include "BooEditLog.hpp"
#include "Command_NewLine.hpp"
#include "EditorException.hpp"

void Command_NewLine::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    // log
    booEditLog("executing on Command_NewLine");
    
    // setting new line
    model.addNewLine(model.cursorLine(), model.cursorColumn());

}

void Command_NewLine::undo(EditorModel& model) 
{
    // move back fundamental
    // combine the marked line (before new line) and its next line (after new line)
    booEditLog("undoing on Command_NewLine");
    model.combineTwoLine(this->undoLine, this->undoLine + 1, undoColumn);
}
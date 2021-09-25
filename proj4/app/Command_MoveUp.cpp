#include "BooEditLog.hpp"
#include "Command_MoveUp.hpp"
#include "EditorException.hpp"

void Command_MoveUp::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    // log
    booEditLog("executing on Command_MoveUp");
    // if we already at position first line, throws
    if (model.cursorLine() == 1)
    {
        throw EditorException{"Already at top"};
    } else if (model.EndColumnOf(model.cursorLine() - 1) < model.cursorColumn()) // if our cursor column is larger than the previous line's ending column, place at the end of that column
    {
        model.setCursorPosition(model.cursorLine() - 1, model.EndColumnOf(model.cursorLine() - 1));
    } else {
        // None of above: we only move right fundamental
        
        model.setCursorPosition(model.cursorLine() - 1, model.cursorColumn());
    }
}

void Command_MoveUp::undo(EditorModel& model) 
{
    // move back fundamental
    // note if your command throws exception, this might don't have to undo
    booEditLog("undoing on Command_MoveUp");
    model.setCursorPosition(this->undoLine, this->undoColumn);
}
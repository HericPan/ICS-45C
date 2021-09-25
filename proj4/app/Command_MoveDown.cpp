#include "BooEditLog.hpp"
#include "Command_MoveDown.hpp"
#include "EditorException.hpp"

void Command_MoveDown::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    // log
    booEditLog("executing on Command_MoveDown");
    // if we already at position last line, throws
    if (model.cursorLine() == model.lineCount())
    {
        throw EditorException{"Already at bottom"};
    } else if (model.EndColumnOf(model.cursorLine() + 1) < model.cursorColumn()) // if our cursor column is larger than the next line's ending column, place at the end of that column
    {
        model.setCursorPosition(model.cursorLine() + 1, model.EndColumnOf(model.cursorLine() + 1));
    } else {
        // None of above: we only move down fundamentally
        
        model.setCursorPosition(model.cursorLine() + 1, model.cursorColumn());
    }
}

void Command_MoveDown::undo(EditorModel& model) 
{
    // move back fundamental
    // note if your command throws exception, this might don't have to undo
    booEditLog("undoing on Command_MoveDown");
    model.setCursorPosition(this->undoLine, this->undoColumn);
}
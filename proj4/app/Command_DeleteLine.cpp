#include "BooEditLog.hpp"
#include "Command_DeleteLine.hpp"
#include "EditorException.hpp"

void Command_DeleteLine::execute(EditorModel& model) 
{
    // save the line for undoing
    this->undoLine = model.cursorLine();
    this->undoColumn = model.cursorColumn();
    booEditLog("executing on Command_DeleteLine");

    
    if (model.lineCount() == 1 && model.cursorLine() == 1 && model.EndOfCurrentLine() == 1) // if we only have one line, and the end of the line is at 1
    {
        throw EditorException{"Already empty"};
    } else if (model.lineCount() == 1 && model.cursorLine() == 1) //  if we only have one line, but this line is not empty
    {
        // save that line
        this->undoString = model.line(model.cursorLine()); 
        
        model.setLine(1, "");
        model.setCursorPosition(1,1);


    } else  // normal situation, just delete that line
    {
        this->undoString = model.popLineThenPlaceCursor(model.cursorLine());
    }
    
}

void Command_DeleteLine::undo(EditorModel& model) 
{
    // move back fundamental
    // combine the marked line (before new line) and its next line (after new line)
    booEditLog("undoing on Command_DeleteLine");
    
    model.insertLine(this->undoLine, this->undoString);

    model.setCursorPosition(this->undoLine, this->undoColumn);
    
}
#ifndef COMMAND_BACKSPACE_HPP
#define COMMAND_BACKSPACE_HPP

#include "Command.hpp"

class Command_Backspace : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
    char undoChar;

};


#endif
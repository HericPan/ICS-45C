#ifndef COMMAND_MOVELEFT_HPP
#define COMMAND_MOVELEFT_HPP

#include "Command.hpp"

class Command_MoveLeft : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;

};

#endif
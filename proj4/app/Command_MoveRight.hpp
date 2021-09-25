#ifndef COMMAND_MOVERIGHT_HPP
#define COMMAND_MOVERIGHT_HPP

#include "Command.hpp"

class Command_MoveRight : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
};

#endif
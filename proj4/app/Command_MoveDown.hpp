#ifndef COMMAND_MOVEDOWN_HPP
#define COMMAND_MOVEDOWN_HPP

#include "Command.hpp"

class Command_MoveDown : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
};

#endif
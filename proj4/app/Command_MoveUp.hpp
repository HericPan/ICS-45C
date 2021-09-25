#ifndef COMMAND_MOVEUP_HPP
#define COMMAND_MOVEUP_HPP

#include "Command.hpp"

class Command_MoveUp : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
};

#endif
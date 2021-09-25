#ifndef COMMAND_NEWLINE_HPP
#define COMMAND_NEWLINE_HPP

#include "Command.hpp"

class Command_NewLine : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
};

#endif
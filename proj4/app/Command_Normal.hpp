#ifndef COMMAND_NORMAL_HPP
#define COMMAND_NORMAL_HPP

#include "Command.hpp"

class Command_Normal : public Command
{
public:
    Command_Normal(char input);
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
    char undoChar;
};

#endif
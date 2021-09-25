#ifndef COMMAND_HOME
#define COMMAND_HOME
#include "Command.hpp"

class Command_Home : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
};

#endif
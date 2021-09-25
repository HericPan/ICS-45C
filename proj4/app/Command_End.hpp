#ifndef COMMAND_END
#define COMMAND_END

#include "Command.hpp"

class Command_End : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
};

#endif
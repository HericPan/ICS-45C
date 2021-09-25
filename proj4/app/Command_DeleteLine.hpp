#ifndef COMMAND_DELETELINE_HPP
#define COMMAND_DELETELINE_HPP

#include "Command.hpp"

class Command_DeleteLine : public Command
{
public:
    void execute(EditorModel& model) override;
    void undo(EditorModel& model) override;
private:
    int undoLine;
    int undoColumn;
    std::string undoString;
};

#endif
// InteractionProcessor.cpp
//
// ICS 45C Spring 2021
// Project #4: People Just Love to Play with Words
//
// Implementation of the InteractionProcessor class

#include "InteractionProcessor.hpp"
#include "EditorException.hpp"
#include "Interaction.hpp"


// This function implements command execution, but does not handle "undo"
// and "redo"; you'll need to add that handling.

void InteractionProcessor::run()
{
    view.refresh();

    while (true)
    {
        Interaction interaction = interactionReader.nextInteraction();

        if (interaction.type() == InteractionType::quit)
        {
            // we need to free the dynamically allocated command arrays
            for (Command * c : this->redoList)
                delete c;
            for (Command * c : this->undoList)
                delete c;
            break;
        }
        else if (interaction.type() == InteractionType::undo)
        {
            if (this->undoList.size() > 0){
                model.clearErrorMessage();
                // pop one item from the undo list
                Command* commandToUndo = this->undoList.back();
                this->undoList.pop_back();

                // execute this command's undo funciton
                commandToUndo->undo(model);
                view.refresh();

                // add this item to redo list for later use
                this->redoList.push_back(commandToUndo);
            }
            
        }
        else if (interaction.type() == InteractionType::redo)
        {
            if (this->redoList.size() > 0){
                model.clearErrorMessage();
                // pop one item from the redo list
                Command* commandToRedo = this->redoList.back();
                this->redoList.pop_back();

                // execute this command's execute function
                commandToRedo->execute(model);
                view.refresh();
                
                // add this item to undo list for later use
                this->undoList.push_back(commandToRedo);
            }
        }
        else if (interaction.type() == InteractionType::command)
        {
            
            Command* command = interaction.command();

            try
            {
                command->execute(model);
                model.clearErrorMessage();                

                // only if the command runs successfully can we add this command to undo
                // and also clear the redo list

                // 1. add the new command to the undo list 
                this->undoList.push_back(command);
                // 2. if we executed a new command, we need to clear the redo list, and deallocate the items in redoList
                for (Command* c : this->redoList) 
                        delete c;
                this->redoList.clear();
            }
            catch (EditorException& e)
            {
                model.setErrorMessage(e.getReason());
                // since the command is invalid, so we should deallocate it.
                delete command;
            }
           

            view.refresh();

            // Note that you'll want to be more careful about when you delete
            // commands once you implement undo and redo.  For now, since
            // neither is implemented, I've just deleted it immediately
            // after executing it.  You'll need to wait to delete it until
            // you don't need it anymore.
            
            
        }
    }
}


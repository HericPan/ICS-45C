// KeypressInteractionReader.cpp
//
// ICS 45C Spring 2021
// Project #4: People Just Want to Play with Words
//
// Implementation of the KeypressInteractionReader
//
// YOU WILL NEED TO IMPLEMENT SOME THINGS HERE
#include "Command_MoveRight.hpp"
#include "Command_MoveLeft.hpp"
#include "Command_MoveUp.hpp"
#include "Command_MoveDown.hpp"
#include "Command_Home.hpp"
#include "Command_End.hpp"
#include "Command_NewLine.hpp"
#include "Command_Backspace.hpp"
#include "Command_DeleteLine.hpp"
#include "Command_Normal.hpp"
#include "KeypressInteractionReader.hpp"


// You will need to update this member function to watch for the right
// keypresses and build the right kinds of Interactions as a result.
//
// The reason you'll need to implement things here is that you'll need
// to create Command objects, which you'll be declaring and defining
// yourself; they haven't been provided already.
//
// I've added handling for "quit" here, but you'll need to add the others.

Interaction KeypressInteractionReader::nextInteraction()
{
    while (true)
    {
        Keypress keypress = keypressReader.nextKeypress();

        if (keypress.ctrl())
        {
            // The user pressed a Ctrl key (e.g., Ctrl+X); react accordingly

            switch (keypress.code())
            {
            case 'X': // CTRL+X: Quit
                return Interaction::quit();

            case 'Z': // CTRL+Z: Undo
                return Interaction::undo();
            
            case 'A': // CTRL+A: Redo
                return Interaction::redo();
                
            case 'O': // CTRL+O: Move Right
                return Interaction::command(new Command_MoveRight());
            
            case 'U': // CTRL+U: Move Left
                return Interaction::command(new Command_MoveLeft());
            
            case 'Y': // CTRL+Y: Move Home
                return Interaction::command(new Command_Home());
            
            case 'P': // CTRL+P: Move End
                return Interaction::command(new Command_End());
            
            case 'I': // CTRL+I: Move Up
                return Interaction::command(new Command_MoveUp());
            
            case 'K': // CTRL+K: Move Down
                return Interaction::command(new Command_MoveDown());

            case 'J': // CTRL+J: New Line
                return Interaction::command(new Command_NewLine());

            case 'M': // CTRL+M: New Line
                return Interaction::command(new Command_NewLine());
            
            case 'H': // CTRL+H: Backspace
                return Interaction::command(new Command_Backspace());
            
            case 'D': // CTRL+D: Delete Current line
                return Interaction::command(new Command_DeleteLine());

            }
        }
        else
        {
            return Interaction::command(new Command_Normal(keypress.code()));
        }
    }
}


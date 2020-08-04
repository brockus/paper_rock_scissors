/*
 * file: messages.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include "project.h"

//
// Prints the result, ie if the user losses, wins or it is a draw
//
void printResult(int state)
{
    if (state == STATE_DRAW)
    {
        puts("Draw!,");
    } // end if
    else if (state == STATE_WINS)
    {
        puts("You win!,");
    } // end else if
    else if (state == STATE_LOSE)
    {
        puts("You lose!,");
    } // end else if
} // end of function printResult

//
// Show player what weapons he or she can use in the game
//
void playerMenu(void)
{
    puts("Type in your weapon name");
    printf("1 %s:\n 2 %s:\n 3 %s:\n", "paper", "rock", "scissors");
    printf("%s", "Type in: ");
} // end of function playerMenu

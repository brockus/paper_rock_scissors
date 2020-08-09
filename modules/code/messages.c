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
        puts("--------------");
    } // end if
    else if (state == STATE_WINS)
    {
        puts("You win!,");
        puts("--------------");
    } // end else if
    else if (state == STATE_LOSE)
    {
        puts("You lose!,");
        puts("--------------");
    } // end else if
} // end of function printResult

//
// Show player what weapons he or she can use in the game
//
void playerMenu(void)
{
    puts("Type in your weapon name");
    puts("------------------------");
    printf(" > : %s \n", "paper");
    printf(" > : %s \n", "rock");
    printf(" > : %s \n", "scissors");
    puts("------------------------");
    printf("%s", "Type in: ");
} // end of function playerMenu

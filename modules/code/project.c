/*
 * file: project.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include "project.h"

int PLAYER_SCORE = 0;
int COMPUT_SCORE = 0;

//
// Compares the users guess with the computers selection and changes the game-state
// The game-state sets if the player is going to win, lose or it is going to be a draw
//
void checkSelection(char *guess, char *selection, int *state)
{
    if (!strcmp(guess, "rock"))
    {
        if (!strcmp(selection, "paper"))
        {
            ++COMPUT_SCORE;
            *state = STATE_LOSE;
        } // end if
        if (!strcmp(selection, "scissors"))
        {
            ++PLAYER_SCORE;
            *state = STATE_WINS;
        } // end if
        if (!strcmp(selection, "rock"))
        {
            *state = STATE_DRAW;
        } // end if
    } // end if
    else if (!strcmp(guess, "paper"))
    {
        if (!strcmp(selection, "paper"))
        {
            *state = STATE_DRAW;
        } // end if
        if (!strcmp(selection, "scissors"))
        {
            ++COMPUT_SCORE;
            *state = STATE_LOSE;
        } // end if
        if (!strcmp(selection, "rock"))
        {
            ++PLAYER_SCORE;
            *state = STATE_WINS;
        } // end if
    } // end else if
    else if (!strcmp(guess, "scissors"))
    {
        if (!strcmp(selection, "paper"))
        {
            ++PLAYER_SCORE;
            *state = STATE_WINS;
        } // end if
        if (!strcmp(selection, "scissors"))
        {
            *state = STATE_DRAW;
        } // end if
        if (!strcmp(selection, "rock"))
        {
            ++COMPUT_SCORE;
            *state = STATE_LOSE;
        } // end if

    } // end else if

} // end of function checkSelection

//
// Generates a computer selection
//
void randomSelection(char *selection)
{
    int randNum = rand() % 3;

    if (randNum == 0)
    {
        strncpy(selection, "rock", OPTION_CHAR_SIZE);
    } // end if
    else if (randNum == 1)
    {
        strncpy(selection, "paper", OPTION_CHAR_SIZE);
    } // end else if
    else
    {
        strncpy(selection, "scissors", OPTION_CHAR_SIZE);
    } // end else
}

//
// Starts all program logic execution
//
void mainExecution(int game_cnt)
{
    //
    // The users guess ie. (rock, paper, scissors)
    char *guess = malloc(sizeof(*guess) * OPTION_CHAR_SIZE);
    checkStringMemory(guess);

    //
    // The computers selection (rock, paper, scissors)
    char *selection = malloc(sizeof(*selection) * OPTION_CHAR_SIZE);
    checkStringMemory(selection);

    int state = 0; // Makes the user win, lose or the game is a draw

    srand((unsigned int)time(NULL));

    for (unsigned int game = 1; game <= game_cnt; ++game)
    {
        playerMenu();
        fgets(guess, OPTION_CHAR_SIZE, stdin);
        stripNewLine(guess); // Sets the last character as a null terminator, so it can be compared

        randomSelection(selection); // Gets a random selection for the computer
        printWeaponsResult(guess, selection);
        

        checkSelection(guess, selection, &state); // Checks who won or if it is a draw
        printResult(state); // Prints the result
    } // end for

    scoreboard(&PLAYER_SCORE, &COMPUT_SCORE);

    free(guess);
    free(selection);

} // end of function mainloop

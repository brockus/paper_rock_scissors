/*
 * file: project.h
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */

#ifndef PROJECT
#define PROJECT

#if defined _WIN32 || defined __CYGWIN__
#ifdef BUILDING_PROJECT
#define PROJECT_PUBLIC __declspec(dllexport)
#else
#define PROJECT_PUBLIC __declspec(dllimport)
#endif

#else
#ifdef BUILDING_PROJECT
#define PROJECT_PUBLIC __attribute__((visibility("default")))
#else
#define PROJECT_PUBLIC
#endif
#endif

#include <stdio.h>  // Default
#include <time.h>   // For seed
#include <stdlib.h> // Random selection generation
#include <string.h> // For use in strcpy

//
// here we have a some handy enums. we use them
// to hardcoding those values.
enum
{
    OPTION_CHAR_SIZE = 15
}; // end of const enum

enum
{
    MAX_GAMES = 10,
    MIN_GAMES = 3    
}; // end of default

enum
{
    STATE_WINS = 1,
    STATE_LOSE = 0,
    STATE_DRAW = 2
}; // end of state enum

// main logic functions
void mainExecution(int game_cnt);
void checkSelection(char *guess, char *selection, int *state);

// utility functions
void checkStringMemory(char *string);
void stripNewLine(char *string);

// message output functions
void printWeaponsResult(const char * guess, const char * selection);
void scoreboard(int *playerScore, int *computerScore);
void printResult(int state);
void playerMenu(void);

#endif // PROJECT

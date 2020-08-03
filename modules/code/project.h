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
// here we define an enum that holds the max
// size of our input values.
enum
{
    MAX_SIZE = 100,
    MAX_GAMES = 10,
    MIN_GAMES = 3
};

// main logic functions
void checkSelection(char *guess, char *selection, int *state);

// utility functions
void checkStringMemory(char *string);
void stripNewLine(char *string);

// message output functions
void printResult(int state);
void playerMenu(void);

#endif // PROJECT

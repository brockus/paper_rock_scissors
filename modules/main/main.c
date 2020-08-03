/*
 * file: main.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include <stdlib.h>

extern void mainExecution(void);

// main is where program execution starts
int main(int argc, char ** argv)
{
    mainExecution();
    return EXIT_SUCCESS;
} // end of function main

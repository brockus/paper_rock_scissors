/*
 * file: main.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "project.h"

void usage(char* program_name)
{
    printf("Usage: %s [--num_games <number>]\n", program_name);
}

// main is where program execution starts
int main(int argc, char ** argv)
{
    int game_cnt = MIN_GAMES;

    if (argc > 1)
    {
        if (argc != 3 ||
            strcmp(argv[1], "--num-games"))
        {
            printf("Invalid command format or switch\n");
            usage(argv[0]);
            return EXIT_FAILURE;
        }
        game_cnt = atoi(argv[2]);
        if (game_cnt <= 0)
        {
            printf("Invalid number of games: %s\n", argv[2]);
            usage(argv[0]);
            return EXIT_FAILURE;
        }
    }
    mainExecution(game_cnt);
    return EXIT_SUCCESS;
} // end of function main

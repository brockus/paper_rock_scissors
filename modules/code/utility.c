/*
 * file: utility.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include "project.h"

//
// here we need to process our given input by
// removing the possible trailing new line char.
//
void stripNewLine(char *string)
{
    size_t length = strlen(string);
    if ((length > 0) && (*(string + length - 1) == '\n'))
    {
        *(string + length - 1) = '\0';
    } // end if
} // end of function stripNewLine

//
// Check if a string was allocated
//
void checkStringMemory(char * string)
{
    if (string == NULL)
    {
        fprintf(stderr, "%s", "not enough memory to allocate string!");
        exit(EXIT_FAILURE);
    } // end if
} // end of function checkStringMemory

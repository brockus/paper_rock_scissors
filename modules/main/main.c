/*
 * file: main.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

extern const char *greet(void);

/*
 * This source code demonstrates a simple hello world program where the message
 * printed is "Hello, C Developer" displayed to the standard output console.
 */
int main(void)
{
    puts(greet());
    return EXIT_SUCCESS;
} // end of function main
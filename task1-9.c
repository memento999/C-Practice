#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

// hello              world    and fuck    you!

int main()
{
    int currentChar = 0;
    int prevChar = 0;

    while ((currentChar = getchar()) != '\n')
    {
        if (currentChar == ' ')
        {
            if (prevChar == ' ')
            {
                currentChar = 0;
            }

            prevChar = ' ';
        }else {
            prevChar = 0;
        }

        putchar(currentChar);
    }

    printf("\n");

    return 0;
}

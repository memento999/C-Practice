#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */

int main()
{
    int c, nl, tb, bl;
    nl = 0;
    tb = 0;
    bl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        };
        if (c == '\t')
        {
            ++tb;
        };
        if (c == ' ')
        {
            ++bl;
        };
    }

    printf("\n%d\n%d\n%d\n", nl, tb, bl);

    return 0;
}
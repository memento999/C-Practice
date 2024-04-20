#include <stdio.h>
// Write a program that prints its input one word per line.
int main()
{
    int c;

    while ((c = getchar()) != '\n')
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar('\n');
        }

        putchar(c);
    }
    
    printf("\n");
    return 0;
}

#include <stdio.h>

int main()
{
    // Open the input file
    FILE *file = fopen("input.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    int c, nl, tb, bl;
    nl = 0;
    tb = 0;
    bl = 0;

    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);

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

    printf("\n%d%d%d\n", nl, tb, bl);

    // Close the file
    fclose(file);

    return 0;
}
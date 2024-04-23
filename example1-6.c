#include <stdio.h>

/* count digits, white space, others */

int main()
{
    /*
        c - to keep track characters in text stream,
        i - for indexing in loops,
        nwhite - for whitespaces and nother -  for all other characters
    */
    int c, i, nwhite, nother;
    int ndigit[10]; // array declaration of size 10

    nwhite = nother = 0; // initialize to zero

    /*
        initialize all array elements to zero!(In C, local variables, including arrays, are not
        initialized by default.  This means that when you declare an array without explicitly initializing
        its elements, they will contain garbage values, which are unpredictable and could be anything.)
    */
    for (i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }

    // take text as an input
    while ((c = getchar()) != EOF)
    {   
        // check for numbers
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }
        // check for white spaces
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;
}

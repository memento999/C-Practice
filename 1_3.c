#include <stdio.h>

/*  
    Write a program to print the corresponding Celsius to Fahrenheit table.
    Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
*/

#define LOWER 0  // lower limit of table 
#define UPPER 300  // upper limit
#define STEP 20  // step size

int main()
{
    float celsius;

    for (celsius = UPPER; celsius >= LOWER; celsius = celsius - STEP)
    {
        printf("%3.0f\t%6.1f\n", celsius, (((9.0 / 5.0) * celsius) + 32.0));
    }

    return 0;
}


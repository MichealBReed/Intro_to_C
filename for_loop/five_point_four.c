#include <stdio.h>

int main (void)
{
    int n,number,triangular_number;

    printf("What triangular number do you want? ");
    scanf ("%i", &number);

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n      Sum of 1 to n\n");
    printf("---     ----------\n");

    triangular_number = 0;

    for (n = 1; n <= number; ++n)
    {
        triangular_number += n;
        printf("%3i      %3i\n",n,triangular_number);
    }

    return 0;
}
#include <stdio.h>


int triangularNumber()
{
    int n, i, triangularNumber = 0;

    printf("What triangular number would you like to calculate?:");
    scanf("%i",&n);

    for (i = 0; i <= n; ++i)
        triangularNumber+=i;

    return triangularNumber;
}


int main(void)
{

    x = triangularNumber();

    printf("The triangular number for the given number is %i.\n", x);

    return 0;
}
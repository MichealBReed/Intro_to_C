#include <stdio.h>

int main (void)
{
    int n, two_to_the_n;

    printf(" n      2^n\n");
    printf("---     --------\n");

    two_to_the_n = 1;

    do 
    {
        printf("%2i     %i\n",n, two_to_the_n);

        two_to_the_n = two_to_the_n * 2;

        n++;
        
    }

    while (n <= 10);

    return 0;
}
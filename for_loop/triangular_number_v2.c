#include <stdio.h>

int main (void)
{
    int n,triangular_number;

    printf("n       Triangular Number\n");
    printf("---     ----------------\n");

    do
    {
        triangular_number = (n * (n + 1)) / 2;
        printf("%2i      %2i\n",n,triangular_number);
        n = n + 5;
    }

    while (n <= 50);

    return 0;
}
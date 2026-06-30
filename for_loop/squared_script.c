#include <stdio.h>

int main (void)
{
    int n, y;

    printf("n       n^2\n");
    printf("---     ----\n");

    n = 1;

    do
    {
        y = n * n;
        printf("%2i      %2i\n",n,y);
        n = n + 1;
    }

    while(n <= 20);

    return 0;
}
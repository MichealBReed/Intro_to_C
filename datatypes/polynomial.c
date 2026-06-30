#include <stdio.h>

int main (void)
{
    float x = 2.55;

    float y = 3 * (x * x * x) - 5 * (x * x) + 6;

    printf("y = %f\n",y);

    return 0;
}
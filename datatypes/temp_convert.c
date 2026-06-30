#include <stdio.h>

int main (void)
{
    float F = 27;

    float C = (F - 32) / 1.8;

    printf("The Temperature  of %fF = %fC in Celsius\n",F,C);

    return 0;
}
/*Script to calculate x^b*/

#include <stdio.h>


int x,b;
int power(int x, int b);

int main(void)
{
    printf("Please enter the base number:");
    scanf("%i", &x);

    printf("Please enter the exponent:");
    scanf("%i",&b);

    int result = power(x,b);

    printf("%i raised to the %i power is %i\n",x,b,result);

    return 0;

}

int power(int x, int b)
{
    int result = x;
    int count = 0;
    
    while (count < b - 1)
        {
        ++count;
        result *= x;
        }

    return result;
}


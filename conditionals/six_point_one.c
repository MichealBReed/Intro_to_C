#include <stdio.h>

int main (void)
{
    int number;

    printf("Enter number:");
    scanf("%i",&number);

    if (number < 0)
    {
        number = -1 * number;
        
    }

    printf("The absolute value of %i\n",number);

    return 0;
}
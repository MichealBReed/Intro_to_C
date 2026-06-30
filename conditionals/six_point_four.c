/*Script to determine if a number is even or odd using the if-else syntax*/

#include <stdio.h>

int main (void)
{
    int number;

    printf("Please enter a number:");
    scanf("%i",&number);

    if ((number % 2) == 0)
    {
        printf("%i is even.\n",number);
    }

    else
        printf("%i is odd.\n",number);

        return 0;
}
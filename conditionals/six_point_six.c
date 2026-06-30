/*Implementing a function to assess the sign of a number*/

#include <stdio.h>

int main (void)
{
    int number;

    printf("Please enter a number:");
    scanf("%i",&number);

    if (number > 0)
        printf("%i is positive.\n", number);
    
    else if (number == 0)
        printf("The number is 0.\n");

    if (number < 0)
        printf("%i is negative.\n",number);

    return 0;
}
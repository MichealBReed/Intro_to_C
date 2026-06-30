/*Script to determine if a number is even or odd*/

#include <stdio.h>

int main (void)
{
    int number;
    printf("Enter a number please:");
    scanf("%i",&number);

    if (number % 2 == 0)
    {
        printf("%i is even\n", number);
    }

    if (number % 2 != 0)
    {
        printf("%i is odd\n", number);
    }

    return 0;
}
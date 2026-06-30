#include <stdio.h>

int main (void)
{
    int n, number,triangular_number,counter,counter_cycles;
    printf("How many triangular numbers do you want to compute?\n");
    scanf("%i",&counter_cycles);

    for (counter = 1;counter <= counter_cycles; ++counter)
    {
        printf("What triangular number do you want to compute?");
        scanf("%i",&number);

        printf(" TABLE OF TRIANGULAR NUMBERS \n\n");

        printf("n       Sum of 1 to n\n");
        printf("---     ------------\n");

        triangular_number = 0;

        for (n = 1; n <= number;++n)
        {
            triangular_number+=n;
            printf("%i      %i\n",n,triangular_number);
        }
    }

    return 0;
}
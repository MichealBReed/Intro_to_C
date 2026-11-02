#include <stdio.h>

int main (void)
{
    int fib_prev, fib_prev_two,fib_current,num_cycles,index;

    fib_prev_two = 0;
    fib_prev = 1;
    fib_current = 0;

    printf("Please enter how many numbers in the Fibonacci sequence should be calculated.\n");
    scanf("%i",&num_cycles);

    printf("0 : %i\n", fib_prev_two);
    printf("1 : %i\n", fib_prev);

    for (index = 2; index < num_cycles; ++index)
        {
            fib_current = fib_prev + fib_prev_two;
            printf("%i : %i\n", index, fib_current);
            fib_prev_two = fib_prev;
            fib_prev = fib_current;
        }

    return 0;
}
#include <stdio.h>

int main (void)
{
    int n,i,value,counter;

    printf("n       y\n");
    printf("---     ------\n");


    for (i = 2;i <= 10;i++)
    {
    printf("I am in the outer loop with a value of %i\n",i);
    value = 0;
    
        for (counter = 2;counter <= n - 1;counter++)
        {
            value = counter * (counter + 1);
        }
    printf("The value is %i\n",value);
    
    }   

    return 0;

}
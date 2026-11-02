#include <stdio.h>

/*Write a program that calculates the average of an array of 10 floating point values.*/

int main (void)
{
    int index;
    float value_array[10],value,sum,average;

    for (index = 0;index <= 9;++index)
        value_array[index] = 0;

    printf("Please Enter 10 floating point values:\n");
    
    for (index = 0; index <= 9;++index)
        {

            printf("%i : ",index);
            scanf("%f", &value);
            value_array[index] = value;
        }
        
    
    for (index = 0; index <= 9; ++index)
                sum += value_array[index];

    average = sum / 10;

    printf("The average of the given values is %f\n", average);

    return 0;
}
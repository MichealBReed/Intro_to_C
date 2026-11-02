/*Script to calculate the cumulative sum of a vector*/

#include <stdio.h>

int     array_length;
float   answer;

float arraySum(int array_length,float array[array_length]);

int main(void)
{
    printf("How many values should the array contain?");
    scanf("%i",&array_length);
    
    float array[array_length];

    answer = arraySum(array_length, array);

    printf("The sum of the given array is %f.\n", answer);
    
    return 0;
}


float arraySum(int array_length,float array[array_length]){

    float sum = 0, value;
    int i;

    for(i = 0; i < array_length; ++i)
        {
            printf("Enter a value:");
            scanf("%f",&value);
            array[i] = value;
        }

    for(i = 0;i < array_length;++i)
        sum+=array[i];

    return sum;
}



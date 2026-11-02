/*Script that computes the square root of a given number using Newton's method where epsilon is a given arguement */

#include <stdio.h>

float n;


float squareRoot(float n);
float absoluteValue(float x);

int main(void)
{
    printf("Please input number who's square root you want to compute:");
    scanf("%f",&n);
    printf("The square root of %f is %f.\n",n,squareRoot(n));
    return 0;
}


float absoluteValue(float x)
{
    if (x < 0)
        x = x * -1;
        return x;
}


float squareRoot(float n)
{
    float   epsilon;
    float   guess = 1.0;
    int     max_limit, count = 0;


    printf("Please input a float for the epsilon value:");
    scanf("%f", &epsilon);

    printf("Max number of trials?:\n");
    scanf("%i",&max_limit);

    while ( absoluteValue(n / (guess * guess)) != 1 + epsilon)

        if (count < max_limit)
        {
            guess = (n / guess + guess) / 2;
            printf("The guess is %f\n", guess);
            ++count;
        }

        else 
            return guess;

    return guess;
    

}


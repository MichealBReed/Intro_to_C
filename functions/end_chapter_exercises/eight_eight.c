/*Script to solve a quadratic equation using the discriminant
b^2 - 4ac
*/

#include <stdio.h>
#include <stdbool.h>

float calculateDiscriminant(int a, int b, int c);
float bisectionMethod(float a, float b, float c);
float computeOutput(float a, float b, float c, float x);
float absoluteValue(float x);
bool checkRootExist(float a, float b, float c, float x);

int main(void)
{

    int a,b,c;
    printf("This program is meant to solve quadratic equations of the form ax^2 + bx + c.\n");

    printf("Please enter a value for a:");
    scanf("%i", &a);

    printf("Please enter a value for b:");
    scanf("%i", &b);

    printf("Please enter a value for c:");
    scanf("%i", &c);

    if (calculateDiscriminant(a,b,c) < 0)
        printf("The given values result in a negative discriminant meaning that the roots are imaginary.\n")

    else




    return 0;
}


float computeOutput(float a, float b, float c, float x)
{
    return (a * (x * x)) + (b * x) + c;
}

bool checkRootExist(float a, float b, float c, float x,float y)
{
    bool rootHere = true;

    f_x = computeOutput(a,b,c,x);
    f_y = computeOutput(a,b,c,y);

    if (f_x > 0 && f_y < 0)
        rootHere = true;
    
    else if (f_x < 0 && f_y > 0)
        rootHere = true;

    else
        rootHere = false;

    return rootHere;
}


float absoluteValue(float x)
{
    if (x < 0)
        return x * -1.0;
    else
        return x;
}

float bisectionMethod(float a, float b, float c)
{

    float x, f_x, y, f_y , z , f_z, tolerance = .001
    int   max_trial, count = 0;

    printf("Where should the bound begin?");
    scanf("%x", &start);

    printf("Where should the bound end?");
    scanf("%z", &end);

    printf("What should be the tolerance?");
    scanf("%f", &tolerance);

    printf("Max number of trials?");
    scanf("%i", &max_trial);

    return tolerance;
}

float secantMethod(float a, float b, float c)
{
    float first_guess, second_guess, next_guess;
    float tolerance = .001;
    int max_cycles = 100, count = 0;


    printf("Please give the first guess:");
    scanf("%f",&first_guess);

    printf("Please give the second guess:");
    scanf("%f",&second_guess);

    f_first_guess = computeOutput(a,b,c,first_guess);
    f_second_guess = computeOutput(a,b,c,second_guess);

    while(count < max_cycles || absoluteValue(f_first_guess - 0) > tolerance)
        {
            next_guess = guess - (f_second_guess * ((second_guess - first_guess) / (f_second_guess - f_first_guess)))
        }


}
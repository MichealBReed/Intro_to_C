/* Script that simultaneously counts the amount of failing scores and the average test score*/


#include <stdio.h>

int main (void)
{
    int number_of_grades,i,grade;
    int gradeTotal;
    int failure_count;
    float average;

    gradeTotal = 0;
    failure_count = 0;

    printf("How many grades will be assessed?:");
    scanf("%i",&number_of_grades);

    for (i = 1;i <= number_of_grades;++i)
    {
        printf("Please enter test score:");
        scanf("%i",&grade);
        gradeTotal+=grade;

        if (grade <= 65)
        {
            failure_count++;
        }
    }

    average = (float) gradeTotal / number_of_grades;

    printf("The number of failing exam scores is %i and the average grade for the %i inputed scores is %.2f\n",failure_count, number_of_grades,average);
    

    return 0;
}
#include <stdio.h>

/*Modify 7.2 so that any number of responses can be entered. Include a procedure where if the user inserts 999
the procedure ends. */

int main(void)
{
    int response, num_responses,index;

    printf("Please enter the number of responses you will be entering:");
    scanf("%i",&num_responses);

    int num_array[11];

    for (index = 0;index <= 10;++index)
        num_array[index] = 0;

    for (index = 0; index < num_responses;++index)
        {
            printf("Please enter the test score:");
            scanf("%i",&response);

            if (response == 999)
                break;

            else if (response < 1 || response > 10)
                {
                        printf("The submitted score is boutside the alloted bounds. Please insert numbers between 1-10.\n");
                        index = index - 1;
                }

            else
                {
                    ++num_array[response];
                }
        }

        printf("Number   Frequency\n");
        printf("------   ---------\n");

        for (index = 1;index <= 10; ++index)
            printf("%4i%4i\n", index, num_array[index]);

    return 0;

}
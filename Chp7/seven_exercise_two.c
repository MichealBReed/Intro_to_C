#include <stdio.h>

//Modify 7.1 so that the elements of the array values are intially set to 0. Use a for loop for the initialization.//

int main (void)
{
    int value_array[10];
    int index;

    for (index = 0;index <= 9; ++index)
        value_array[index] = 0;

    for (index = 0; index <= 9; ++index)
        printf("value_array[%i] = %i\n", index, value_array[index]);

    value_array[0] = 340;
    value_array[2] = 50200;
    value_array[5] = 900;
    value_array[3] = value_array[0] / value_array[5];
    value_array[9] = value_array[5] / 10;
    value_array[8] = --value_array[2];

    printf("\n");
    printf("Now we print array where values have been assigned.");
    for (index = 0; index <= 9; ++index)
        printf("value_array[%i] = %i\n", index, value_array[index]);
    
    return 0;
}
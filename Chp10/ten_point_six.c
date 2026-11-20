/*Write a function called removeString to remove a specified number of characters from a character string.
Function should take three arguments: source string, starting index number in source string, and the number
of characters to remove.

So given the string "the wrong son" as text in the function removeString(text,4,6) should return "the son".
*/

#include <stdio.h>

void removeString(char str[], int start_index, int character_remove);


int main(void){

    char input[] = "the wrong son";
    int i, span;

    printf("Please input the starting index of the removal procedure: ");
    scanf("%i", &i);

    printf("Please input the window size: ");
    scanf("%i", &span);

    removeString(input, i, span);

    printf("The resulting string is \'%s\'.\n", input);

}


void removeString(char str[], int start_index, int character_remove){

    int i;

    while(str[i] != '\0')
    {
        if(i < start_index || i >= start_index + character_remove)
            {
                str[i] = str[i];
                ++i;
            }
        else
            {
                str[i] = ' ';
                ++i;
            }

    }
}


/* Write a function called substring to extract a portion of a character string. The script should check if the provided
indices are within the length of the original string. If not, the function should return the substring starting at the
start index and spanning to the end. */
#include <stdio.h>
#include <stdbool.h>





// Function Prototype
void substring(char source[], int start, int count, char result[]);
void readLine(char buffer[]);
bool checkLength(char source[], int start, int count);
int countLength(char source[]);


int main(void){

    char line[81], output[30];
    int start, count;

    printf("Please type your string:\n");
    readLine(line);

    printf("Please enter the start index of the substring: ");
    scanf("%i", &start);

    printf("Please enter the length of the substring: ");
    scanf("%i", &count);

    if(checkLength(line, start, count) == true)
        {
            
            substring(line, start, count, output);
            printf("The substring of \'%s\' at position %i with a length of %i is %s.\n", line, start, count, output);

        }

    else
        {
            printf("Gave invalid end bound. Printing from the start index to the end of the string.\n");
            count = countLength(line);
            substring(line, start, count, output);
            printf("The substring of \'%s\' starting from position %i to the end of the string is %s.\n", line, start, output);
        }

    return 0;
}


void readLine(char buffer[])
{

    char character;
    int i = 0;

    do
    {
        character = getchar();
        buffer[i] = character;
        ++i;
    } 
    while(character != '\n');

    buffer[i - 1] = '\0';
    
}



int countLength(char source[]){

    int totalLength = 0, i = 0;

    while(source[i] != '\0')
    {
        ++totalLength;
        ++i;
    }


    return totalLength;
}



bool checkLength(char source[], int start, int count){

    int totalLength = 0, i = 0;

    while(source[i] != '\0')
    {
        ++totalLength;
        ++i;
    }

    if(start + count > totalLength)
        return false;
    else
        return true;
}



void substring(char source[], int start, int count, char result[count + 1]){

    int end = start + count;
    int i;
    int j = 0;
    
    for(i = start; i < end; ++i)
        {
            result[j] = source[i];
            ++j;
        }

    result[j] = '\0';
}
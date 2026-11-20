/* Write a findString function to determine if one character string exists inside another string. If the subsstring is found,
have the function return the start indec of the match. If not, return -1. Since I have not studied dynamic memory allocation, I will
assume the length of the substring is 3.*/

#include <stdio.h>

void readLine(char buffer[]);
int findString(char str[], char query[]);
int findLength(char str[]);


int main(void){

    int result, len;
    char line[] = "a chatterbox", query[] = "hat";
    
    result = findString(line, query);    
    
    if(result != -1)
        printf("The substring of %s starts at index %i in string %s.\n", query, result, line);
    else
        printf("The substring of %s was not found in %s.\n", query,line);
    
    return 0;
}




int findLength(char str[]){

    int i = 0, length = 0;

    while(str[i] != '\0')
    {
        ++length;
        ++i;
    }

    return length;

}

int findString(char str[], char query[]){

    int i = 0, j = 0, match_index;

    int string_length = findLength(str);
    printf("The length of the query string is %i\n", string_length);

    for(i = 0; i < string_length - 2; ++i)
    {
        if(str[i] == query[0] && str[i + 1] == query[1] && str[i + 2] == query[2])
        {
            match_index = i;
            return match_index;
        }
        else
            match_index = -1;
    }

    return match_index;

}



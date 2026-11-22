/* If c is a lowercase character, the expression c - 'a' +'A' produces the upper case equivalent, assiming ASCII character set.
Write a function called uppercase that converts all lowercase characters in a string into their uppercase equivalents*/

#include<stdio.h>

void uppercase(char str[]);

int main(void){

    char str1[] = "pglang big baller shot caller";

    printf("The original string was %s.\n",str1);
    uppercase(str1);
    printf("Now it is %s\n", str1);

    return 0;
}

void uppercase(char str[]){

    int i = 0;
    char c;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] -'a' + 'A';
            i++;
    }
}
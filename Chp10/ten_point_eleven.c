/*Extend the strToInt fucntion so that if the first character of the string is a minus sign, the value that follows is
taken as a negative number*/


#include <stdio.h>

int strToInt(char str[]);

int main(void){

    char str1[] = "-245";
    char str2[] = "523";
    char str3[] = "13x5";

    printf("%i\n", strToInt(str1));
    printf("%i\n", strToInt(str2));
    printf("%i\n", strToInt(str3));


    return 0;
}


int strToInt(char str[]){

    int i, intValue, result = 0;


    if(str[0] == '-')
    {
        for(i = 1; str[i] >= '0' && str[i] <= '9'; ++i)
            {
                intValue = (str[i] - '0') * -1;
                result = result * 10 + intValue;
            } 
    }
    
    else
    {
        for(i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
            {

                intValue = str[i] - '0';
                result = result * 10 + intValue;
            } 
        }

    return result;
}


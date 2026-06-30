/*Program to assess if a character is alphabetic, numerical, special or neither*/

#include <stdio.h>


int main (void)
{

    char c;

    printf("Please input a character:");
    scanf("%c",&c);

    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        printf("%c is a alphabetic character.\n",c);

    else if (c >= '0' && c <= '9')
        printf("%c is a numeric character.\n",c);
    
    else
        printf("%c is a special character.\n",c);


    return 0;
}
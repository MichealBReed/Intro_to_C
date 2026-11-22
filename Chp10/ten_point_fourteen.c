/*Write a function called intToStr that converts an integer value into a character string. Be sure to handle the negative integers 
properly.*/

#include <stdio.h>

char intToStr(int num);

int main(void){

    int number = 93743;
    
    intToStr(number);
    printf("\n");


    return 0;
}

char intToStr(int num){

    int i, int_len = 0, dup_num = num;

    while(dup_num > 1)
        {
            ++int_len;
            dup_num = dup_num / 10;
        }

    char str[int_len];
    int rev_idx = int_len - 1;

    while(num > 1)
        {
            i = num % 10;
            i = i + '0';
            str[rev_idx] = i;
            rev_idx--;
            //printf("%c\n", i);
            num = num / 10;
        }

    for (int j =0; j < int_len; j++)
        printf("%c", str[j]);

}
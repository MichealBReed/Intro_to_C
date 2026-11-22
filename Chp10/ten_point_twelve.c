/*Write a function called strToFloat that converts a character string into a floating-point value.
Have the function accept an optional leading minus sign.*/

#include <stdio.h>

int findDecimal(char str[]);
int numbersBehindDecimal(char str[], int decimal_index);
float strToFloat(char str[]);
int strToNum(char str[]);
int power(int base, int power);
int stringLength(char string[]);


int main(void){

    int index;
    int decimal_count;
    char str1[] = "-354.28391";

    printf("%s has been converted to %f\n", str1,strToFloat(str1));

    return 0;

}

int stringLength(char string[]){
    int stringLength = 0, i = 0;

    while(string[i] != '\0')
    {
        ++stringLength;
        ++i;
    }

    return stringLength;
}



int findDecimal(char str[]){

    int i = 0, index = 0;

    while(str[i] != '\0')
        {
            if(str[i] == '.')
            {
                index = i;
                ++i;
            }
            else
                ++i;
        }

    return index;
}

int numbersBehindDecimal(char str[], int decimal_index){

    int count = 0,i = decimal_index + 1;

    while(str[i] != '\0')
        {
            ++count;
            ++i;
        }
    return count;
}


int power(int base, int power){

    int i;
    int result = base;

    if(power == 0)
        return 1;
    
    else if(power == 1)
        return base;

    else
        for(i = 0; i < power - 1; i++)
            {
                result = result * base;
            }   
    
    return result;
    
}

int strToNum(char str[]){

    float intValue, result = 0;
    int i;


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



float strToFloat(char str[]){

    float before_decimal, after_decimal,result;
    int string_len = stringLength(str), num_behind, divisor, decimal_index;
    char before[decimal_index], after[string_len - decimal_index];

    decimal_index = findDecimal(str);


    for(int i = 0; i < decimal_index; i++)
        {
            before[i] = str[i];
        }
    
    for(int i = decimal_index + 1; i < string_len; i++)
    {
        after[i - decimal_index - 1] = str[i];
    }

    before_decimal = strToNum(before);



    
    after_decimal = strToNum(after);
    num_behind = numbersBehindDecimal(str,decimal_index);
    divisor = power(10,num_behind);
    
    if(str[0] == '-')
    {
        result = before_decimal + ((after_decimal / divisor) * -1);
    }

    return result;
}
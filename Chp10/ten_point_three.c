/*Implement a function tha counts the number of words accounting for numbers (positive and negative)
as well as special characters.*/

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c);
bool specialCharacter(const char c);
bool isNumeric(const char c);
int countWords(const char string[]);


int main(void){
    const char text1[] = "Well, here goes";
    const char text2[] = "And here we go...agian";
    const char text3[] = "What isn't it doing....right now...345633.....-3452344..and..done..sike...we still going...nnnnnooooooowww done...for real.";
     
    printf("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));
    printf("%s - words = %i\n", text3, countWords(text3));

    return 0;
}


bool alphabetic(const char c){
    if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}


bool specialCharacter(const char c){
    if(c == '\'' || c == '-')
        return true;
    else
        return false;
}

bool isNumeric(const char c){
    if(c >= '0' && c <= '9')
        return true;
    else
        return false;
}



int countWords(const char string[]){

    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic(const char c);

    for(i = 0; string[i] != '\0'; ++i)
        if(alphabetic(string[i]) || isNumeric(string[i]) || specialCharacter(string[i]))
        {
            if(lookingForWord)
            {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;

    return wordCount;
}
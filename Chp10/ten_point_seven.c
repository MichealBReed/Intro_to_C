/*Write a function called insertString to insert one character string into another string.
There are 3 arguments to the function: source string, the string to be inserted, and the insertion position.
insertString(text, "per", 10) with text from 10.6 should result in "the wrong person".*/

#include <stdio.h>


void insertString(char source[],char insert_string[], int insert_index);
int stringLength(char string[]);
int countCharacter(char string[], int insert_index);

int main(void){

    char str1[50] = "the wrong son"; //Need to allocate enough space for the inserted string.
    char str2[] = "per";
    int index = 10;

    printf("The original string was \'%s\'.\n", str1);

    
    insertString(str1, str2, index);

    printf("The modified string is now \'%s\'.\n", str1);
    

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



int countCharacter(char string[], int start_index){
    int count = 0;
    int i;
    int string_length = 0;

    string_length = stringLength(string);

    for(i = start_index; i < string_length; ++i)
    {
        if(string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
            ++count;
    }

    return count;
}


void insertString(char source[],char insert_string[], int insert_index){

    int insert_string_length,source_string_length, i;
    int character_count;


    insert_string_length = stringLength(insert_string);

    source_string_length = stringLength(source);

    // Calculate the number of characters we need to shift and consequently how many indices we must shift them by
    character_count = countCharacter(source, insert_index);

    // Intialize temporary character array to store the characters we must shift
    char temp[character_count];
    
    for(i = 0; i < source_string_length; ++i)
    {
        // Identify the index of the character we need to shift
        if(i >=insert_index && i < insert_index + character_count)
        
            // Store the character found at index i of the original character array into our temporary array
            temp[i - insert_index] = source[i]; 
        
    }


    for(i = 0; i <character_count; ++i)
        
        // Shift the characters over the necessary amounts of indices aka copy
        source[i + insert_index + insert_string_length] = temp[i];
        

    
    for(i = 0; i < insert_string_length; ++i)
        // Insert the second string at the designated position provided at the insert index parameter
        source[i + insert_index] = insert_string[i];
        

}
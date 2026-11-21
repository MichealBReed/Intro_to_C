/*Use the findString, removeString, and insertString functions to implement a replaceString function.
The function argument is as follows: replaceString(source, s1, s2) that replaces s1 inside the source 
string with s2. The function should call findString to locate s1 inside source, then call remove string 
to remove sq from source, and then insert string to insert s2 at the proper location.*/

#include <stdio.h>


int findString(char str[], char query[]);
int stringLength(char string[]);
int countCharacter(char string[], int insert_index);

void removeString(char str[], int start_index, int span);
void insertString(char source[],char insert_string[], int insert_index);
void replaceString(char source[], char s1[], char s2[]);


int main(void){

    char source[] = "Where is the family?";
    char s1[] = "family";
    char s2[] = "BATMAN";
    
    printf("The original string was: %s\n", source);

    replaceString(source, s1, s2);

    printf("The modified string is: %s\n", source);


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

int findString(char str[], char query[]){

    int i = 0, j = 0, match_index;

    int string_length = stringLength(str);
    

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



void removeString(char str[], int start_index, int span){

    int i;

    for(i = start_index; i < start_index + span; ++i)
        str[i] = ' ';
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

void replaceString(char source[], char s1[], char s2[]){

    int s1_found_index;
    int s1_character_count;

    s1_found_index = findString(source, s1);
    s1_character_count = countCharacter(source, s1_found_index);

    removeString(source, s1_found_index, s1_character_count);
    insertString(source, s2, s1_found_index);

}


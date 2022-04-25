//Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char count(char *str);

int main(){

    char string[100];
    char *str;

    printf("Enter a word : ");
    gets(string);

    str = string;

    int answ = count(str);
    int consenant = strlen(string) - answ;

    printf("Consenant : %d\n", consenant);
    printf("Vowel : %d",answ);
}

char count(char *str){
    
    char vowel[] = {'a','e','i','o','u','A','E','I','O','U'};
    int vowelCount = 0;
    int spaceCount = 0;

    int lengthStr = strlen(str);
    int lengthVowel = sizeof(vowel)/sizeof(vowel[0]);

    for(int i = 0; i < lengthStr; i++){
        for(int j = 0; j < lengthVowel; j++){
            if(str[i] == vowel[j]){
            vowelCount++;
            }
        } 
    }
    return vowelCount;
}
#include <stdio.h>
#include <string.h>

int main(){
    
    char str[100];
    printf("Enter the sentence : ");
    gets(str);

    strrev(str);

    printf("%s", str);
}
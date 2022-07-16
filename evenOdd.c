//Write a C program to check whether a given number is even or odd

#include <stdio.h>

int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d",&number);
    
    if(number % 2 == 0)
        printf("%d is Even",number);
    
    else
        printf("%d is Odd",number);
    
    return 0;
}
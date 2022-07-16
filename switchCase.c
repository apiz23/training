#include <stdio.h>

int main(){

    int n;

    printf("Enter a number  : ");
    scanf("%d", &n);

    /* Checking if the number is even or odd. */
    switch (n % 2)
    {
    case 0:
        printf("Even");
        break;
    case 1:
        printf("Odd");
        break;
    default:
        break;
    }
}
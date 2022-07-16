#include <stdio.h>

int main(){
    
    int num,n,status;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter the nth bit (0-31) : ");
    scanf("%d", &n);

    status = (num >> n ) & 1;

    printf("%d is set to : %d", n,status);

}
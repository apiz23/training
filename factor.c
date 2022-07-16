#include <stdio.h>

int main(){
    int num, i;
    printf("Enter a positive number : ");
    scanf("%d", &num);
    printf("The positive number of %d : \n", num);
    for (i = 1; i <= num; ++i){
        if( num % i == 0){
            printf("%d \n", i);
        }
    }

    return 0;
}
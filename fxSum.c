#include <stdio.h>

float  sum(int a, int b){
    return a+b;
}

int main(void){

    int num1,num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    int tmbh = sum(num1,num2);

    printf("Tambah : %d",tmbh);

}



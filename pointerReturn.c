#include <stdio.h>

int larger(int* a, int* b);

int main(){

    int numA, numB;
    
    printf("Enter a number : ");
    scanf("%d", &numA);

    printf("Enter another number : ");
    scanf("%d", &numB);

    int result = larger(&numA,&numB);

    printf("Larger : %d",result);

}   

int larger(int* a, int* b){

    if(*a > *b){
        return *a;
    }
    else{
        return *b;
    }
}

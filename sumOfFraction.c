// Write a program in C to display the n terms of harmonic series and their sum.
#include <stdio.h>

int main(){

    int i,number;
    double sum;

    printf("Enter the number : ");
    scanf("%d",&number);

    for(i = 1; i <= number; i++){
        printf("1/%d + ",i );
        sum += 1/(double)i;
    }

    printf("\n%lf ", sum);

    return 0;
}
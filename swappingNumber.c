#include <stdio.h>

double swap(double *,double *);

int main(){

    double num1,num2;
    printf("Enter the number (seperate by space) \n ");
    scanf("%lf %lf", &num1, &num2);

    swap(&num1, &num2);

    printf("number 1 : %lf, number 2 : %lf ", num1, num2);

    return 0;

}

double swap(double *a, double *b){

    double temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


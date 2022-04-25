#include <stdio.h>
#include <math.h>


double formula(double a,double b,double c,double o);

void main(){ 

    double a,b,c;

    const pi = 22/7;

    printf("\f ax^2 + bx + c = 0 \n");
    printf("Enter a : ");
    scanf("%lf", &a);
    printf("Enter b : ");
    scanf("%lf", &b);
    printf("Enter c : ");
    scanf("%lf", &c);

    printf("\n");
    
    double result1 = formula(a,b,c,1);
    double result2 = formula(a,b,c,0);

    printf("x1 : %0.3lf \n", result1);
    printf("x2 : %0.3lf", result2);
    
}

double formula(double a,double b,double c,double o){
    double x1,x2;

    if(o == 1){
        return x1 = (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
    }
    else if(o == 0){
       return x2 = (-b-(sqrt(b*b - 4*a*c))) / (2*a);
    }
}
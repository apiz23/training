#include <stdio.h>
#include <math.h>

int main(){

    double c,a,b;

    printf("Enter the length of the triangle : ");
    scanf("%lf", &a);

    printf("Enter the height of the triangle : ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("The hypotenuse of the triangle are : %.2lf", c);

    return 0;


}
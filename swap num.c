#include <stdio.h>

int main(){
    double a, b, temp;
    printf("Enter the first number : ");
    scanf("%lf",&a);
    printf ("Enter the second number : ");
    scanf("%lf",&b);

    temp = a;
    a = b;
    b = temp;

    printf("Swap, number 1 : %.2lf\n", a);
    printf("Swap, number 2 : %.2lf", b);

    return 0;
}

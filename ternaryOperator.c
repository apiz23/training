#include <stdlib.h>
#include <stdio.h>

int main(void){

    int a = 23, b = 10;
    int max;

    /* A ternary operator. It is a shorthand way of writing an if-else statement. */
    max = a > b ? a:b;

    printf("Maximum number : %d\n",max);

    a < b ? printf("%d is max", b) : printf("%d is smaller",a);

}
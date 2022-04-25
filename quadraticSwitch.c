#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,discriminant,root1,root2,imaginary;

    printf("Enter the value of a, b, c in (ax^2 + bx + c) separate by spacing : ");
    scanf("%f %f %f", &a,&b,&c);

    discriminant = b*b - 4*a*c;
    
    switch(discriminant > 0){
        case 1:
            root1 = (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
            root2 = (-b-(sqrt(b*b - 4*a*c)))/(2*a);

            printf("two distinct root\n root 1 = %f\n root 2 : %f ",root1,root2);
            break;
        case 0:
            switch(discriminant < 0){
                case 1:
                    root1 = root2 = (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
                    imaginary= sqrt(-discriminant) / (2 * a);

                    printf("no real root\n root 1 = %f\n root 2 : %f ",root1,root2);
                
                case 0:
                    root1 = root2 = -b / (2 * a);
                    printf("Two equal root\nroot 1 and 2 : %f",root1);

            }
    }
}
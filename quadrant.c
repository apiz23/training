#include <stdio.h>

int main(){

    double x,y

    printf("Enter the coordinate[separete by space] : ");
    scanf(" %lf %lf",&x,&y);

    if(x >= 0){
        if(y >= 0){
            printf("Quadrant 1");
        }
        else{
            printf("Quadrant 4");
        }
    }
    else{
        if(y >= 0){
            printf("Quadrant 2");
        }

        else{
            printf("Quadrant 3");
        }
    return 0;
    }
}

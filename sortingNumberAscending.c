#include <stdio.h>

void main(){

    double num[100000];
    int x;
    printf("Enter how many number do you want to insert : ");
    scanf("%d",&x);

    for(int i = 0; i < x; i++){
        printf("Enter the number %d : ", i);
        scanf("%lf",&num[i]);
    }

    for(int outer = 0; outer < x; outer++){
        for(int inner = outer + 1; inner < x; inner++){
            if(num[inner] < num[outer]){
                int temp = num[inner];
                num[inner] = num[outer];
                num[outer] = temp;
            }
        }
    }

    for( int i = 0; i < x; i++){
        printf("%.1lf, ", num[i]);
    }

}
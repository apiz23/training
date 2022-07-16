//sum of factorial

#include <stdio.h>

int fact(int n);

int main(){

    int start,end,sum = 0;

    do{
        printf("Enter the starting number : ");
        scanf("%d", &start);

        printf("Enter the ending number : ");
        scanf("%d", &end);
    }while (start >= end);

    for(int i = start; i <= end; i++){
        sum += fact(i);
    }

    printf("The total sum : %d", sum);
    return 0;
}
int fact(int n){
  
    int num = 0, x = 1;
    while(num <= n-1){
        x += (x*num);
        num++;
    }

    return x;
}


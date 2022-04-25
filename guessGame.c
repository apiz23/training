#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    int MAX = 100, MIN = 1,guess;

    srand(time(0));

    int answer = (rand() % MAX) + MIN;

    int i = 1,count = 0;

    do{
        printf("\nEnter the guess : ");
        scanf("%d",&guess);
        if(guess > answer){
            printf("High");
        }
        else if(guess < answer){
            printf("Low");
        }
        else{
            printf("Yeah Correct!!!");
        }
        printf("\n");
        count++;
    }while (guess != answer);

    printf("\n");
    printf("The answer : %d\n",answer);
    printf("Number of guess : %d", count);
}
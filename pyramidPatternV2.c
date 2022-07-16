/* Write a program in C to make such a pattern
like right angle triangle with number increased by 1.

1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

int main(){

    int i,j,number = 1,row,column;

    printf("Enter the row : ");
    scanf("%d", &row);

    printf("Enter the column : ");
    scanf("%d", &column);

    for(i = 1; i <= row; i++){
        for(j = 1; j <= i; j++){
            printf("%d ",number);
            number += 1;
        }
        printf("\n");
    }

    return 0;
}



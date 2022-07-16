/*Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
   1 
  2 3 
 4 5 6 
7 8 9 10 
*/

#include <stdio.h>

int main(){
    int i,j,k,space = 3, number = 1;

    for(i = 1; i <= 4; i++){

        for(k = space; k >= 1; k--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("%d ",number );
            number += 1;
        }
        printf("\n");
        space -= 1;
    }
}
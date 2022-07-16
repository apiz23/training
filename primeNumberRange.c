// find prime number in range

#include <stdio.h>

int main(){

   int start,end,i;

   printf("Enter the range (seperate by spacing) : ");
   scanf("%d %d", &start,&end);

   while (start <= end){

      int check = 1;
      if(start < 2){
         continue;
      }

      for(i = 2; i <= start / 2; i++){

         if(start % 2 == 0){
            check = 1;
            break;
         }
      }

      if(check == 0){
         printf("%d ",start);
      }

      start++;
   }

   return 0;
}

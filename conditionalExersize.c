// Write a C program to find the largest of three numbers

#include <stdio.h>

int main(){

    int num1,num2,num3;

    printf("Enter three number with spacing : ");
    scanf("%d %d %d",&num1,&num2,&num3);

   if(num1 > num2){
       if(num1 > num3){
           printf("%d is the largest among three number",num1);
       }
       else{
           printf("%d is the largest among three number",num3);
       }
   }
   else if(num2 > num1){
       if(num2 > num3){
           printf("%d is the largest among three number",num2);
       }
       else{
           printf("%d is the largest among three number",num3);
       }
   }
   else if(num3 > num1){
       if(num3 > num2){
           printf("%d is the largest among three number",num3);
       }
   }


}
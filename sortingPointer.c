#include <stdio.h>

void sorting(int* a,int* b);

int main(){

    int  i,num[100];
    printf("Enter the number of elements : ");
    scanf("%d", &i);

    for(int j = 0; j < i; j++){
        printf("Element %d : ", j);
        scanf("%d",&num[j]);
    }

    sorting(num,&i);

    printf("After soting in Ascending \n");
    
    for(int j = 0; j < i; j++){
        printf("Element %d : %d\n",j,num[j]);
    }

}


void sorting(int *a,int* b){

    int temp;

    for(int g = 0; g < *b; g++){
        for(int k = g+1; k < *b; k++){
            if( a[g] > a[k]){
            temp = a[g];
            a[g] = a[k];
            a[k] = temp;
            }
        }
    }
}
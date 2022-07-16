
//break - exit terus
//continue - skip the next code and do the next iteration

#include <stdio.h>

int main(){

    for(int a = 1; a <= 20; a++)
    {
        if(a == 13)
        {
            break;
        }
        else{
            printf("%d, ", a);
        }
        
    }

    return 0;
}
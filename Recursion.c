#include <stdio.h>

long long fact(int a){
    if(a <= 1){
        return 1;
    }
    return a*fact(a-1);
}

int main(){

    int num = 12;
    printf("%d",fact(num));
}
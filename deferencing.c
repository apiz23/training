#include <stdio.h>

int main(){
    int x = 4;
    int* ptr = &x; // ptr stores the memory address of variable x
    
    int y = *ptr; // Declare variable y and assign to it the data stored in memory pointed to by ptr, which is the value of variable x
    
    printf("%d", y);
}



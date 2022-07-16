#include <stdio.h>

void print(char* x){

    int i;
    while(*(x+i) != '\0'){
        if(x[i] == ','){
            i++;
            break;
        }
        ("%c",*(x+i));
        i++;
    }
}

int main(){

    puts("\n\t KAEDAH PENAKSIRAN SENDIRI\n\tKALKULATOR ZAKAT PENDAPATAN");
    
    char A1[] = "GAJI x 12 Bulan";
    char A2[] = "ELAUN x 12 Bulan";
    char A3[] = "BONUS";
    char A4[] = "(+) PENDAPATAN LAIN";

    double answA[4];
    int checkA = 0;

    while(checkA < 4){
        if(checkA == 1){
            print(A1);
            scanf("%lf",answA[checkA]);
            if(answA[checkA] < 0){
                puts("Please enter positive integer only");
                return 0;
            }else{
                checkA++;
            }
        }
    }
}
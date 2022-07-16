#include <stdio.h>
#include <ctype.h>

void insertGradeAndCredit(int* a);
void calculation(char* x, int* y, int* z);

int main()
{
    int numSub,i;
    do{
        printf("How many subject : ");
        scanf("%d", &numSub);
        printf("\n");

        if(numSub > 0 && numSub < 21){
            i = 1;
        }
        else{
            printf("Please enter again \n");
            i = 0;
        }

    }while(i != 1);

    insertGradeAndCredit(&numSub);

    return 0;
}

void insertGradeAndCredit(int* a)
{
    char grade[20];
    int credit[20];

    for(int i = 0; i < *a; i++)
    {
        printf("Grade for subject %d : ", i+1);
        scanf("%s", &grade[i]);
        grade[i] = toupper(grade[i]);
        printf("Credit for subject %d : ", i+1);
        scanf("%d", &credit[i]);
        printf("\n");
    }

    int y = *a;

    calculation(grade,credit,&y);
}

void calculation(char* x, int* y, int* z)
{
    double totalMax = 0,totalMin = 0,pointerMax,pointerMin;
    int totalCredit = 0,answ;

    printf("Enter the condition of the grade :) \n");
    printf("\n");
    for(int i = 0; i < *z; i++)
    {
        if(x[i] == 'A')
        {
            printf("A what = Plus(1) , Solid(2) , Minus(3) : ");
            scanf("%d",&answ);
            if(answ == 1 || answ == 2){
                totalMax += (4 * y[i]);
                totalMin += (4 * y[i]);
            }
            else{
                totalMax += (3.94 * y[i]);
                totalMin += (3.7 * y[i]);
            }
        }
        else if(x[i] == 'B')
        {
            printf("B what = Plus(1) , Solid(2) , Minus(3) : ");
            scanf("%d",&answ);
            if(answ == 1){
                totalMax += (3.62 * y[i]);
                totalMin += (3.3 * y[i]);
            }
            else if(answ == 2){
                totalMax += (3.24 * y[i]);
                totalMin += (3 * y[i]);
            }
            else{
                totalMax += (2.94 * y[i]);
                totalMin += (2.7 * y[i]);
            }
        }
        else if(x[i] == 'C')
        {
            printf("C what = Plus(1) , Solid(2) , Minus(3) : ");
            scanf("%d",&answ);
            if(answ == 1){
                totalMax += (2.62 * y[i]);
                totalMin += (2.3 * y[i]);
            }
            else if(answ == 2){
                totalMax += (2.24 * y[i]);
                totalMin += (2 * y[i]);
            }
            else{
                totalMax += (1.9 * y[i]);
                totalMin += (1.5 * y[i]);
            }
        }
        else if(x[i] == 'D'){
            totalMax += (1.40 * y[i]);
            totalMin += (1 * y[i]);
        }
        else{
            totalMax += 0;
            totalMin += 0;
        }
    }

    for(int i = 0; i < *z; i++)
    {
        totalCredit += y[i];
    }

    pointerMax = totalMax / totalCredit;
    pointerMin = totalMin / totalCredit;

    printf("\n");
    
    if(pointerMin == pointerMax){
        printf("Congrats!! Your pointer are %0.2lf \n", pointerMax);
    }
    else{
        printf("%0.2lf <= Pointer <= %0.2lf ", pointerMin, pointerMax);
    }

}
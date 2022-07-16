#include <stdio.h>
#include <string.h>

void ViewAnalysis(char [][15],int [][4],int []);
int Search(int numSearch,char [][15],int [][4],int []);

int main(){

    char Student[][15] = {"Aliya", "Farah", "Ahmad", "Shah", "Fatimah", "Umar","Riqi","Adlan","Auni","Amran"};
    int Quiz[][4] = {{99,90,55,74},{34,66,93,74},{66,80,55,24},{0,90,55,74},{56,90,55,40},
                        {66,90,65,27},{51,90,55,74},{66,55,95,84},{66,77,83,76},{66,90,89,84}};
    int Matric[10] = {11227, 11328, 11329, 11330, 11331,11332,11333,11334,11335,11452};
    int option,inputMatric,status = 0;

    printf("\nWELCOME TO QUIZ ANALYSIS PROGRAM\n");
    printf("1. View Analysis\n2. Search\n3. Exit\n");
    printf("\nYour option>> ");
    scanf("%d", &option);

    puts("");

    if(option == 1){
        ViewAnalysis(Student,Quiz,Matric);
    }else if(option == 2){
        do{
            printf("Please enter your matric number: ");
            scanf("%d",&inputMatric);
            status = Search(inputMatric,Student,Quiz,Matric);
            if(status != 0)
                puts("\nMatric number not found!");
        }while(status != 0);
    }else{
        puts("Thank you for using this system…");
    }
    return 0;
}

void ViewAnalysis(char name[][15],int mark[][4],int numberMatric[]){
    
    int sum[] = {0,0,0,0,0,0,0,0,0,0};
    float avg[10]; 
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 4; j++){
            sum[i] += mark[i][j];
        }
        avg[i] = (float)sum[i]/4;
    }
    printf("------------------------------------------------------------------------------");
    puts("\nNo.\tName\t\tMatric No\tQ1\tQ2\tQ3\tQ4\tAVG\n");
    for(int i = 0,j = 0; i < 10; i++){
        printf("%d.\t%s\t\t%d\t\t%d\t%d\t%d\t%d\t%.1f\n",i+1,name[i],numberMatric[i],mark[i][j],mark[i][j+1],mark[i][j+2],mark[i][j+3],avg[i]);
    }
    printf("------------------------------------------------------------------------------");
}

int Search(int numSearch,char stdName[][15],int stdQuiz[][4],int stdMatric[]){
    
    char grade[][3] = {"A","B+","B","C+","C","D","E","F"};
    char indexGrade;
    int number;
    
    for(int i = 0; i < 10; i++){
        if(numSearch == stdMatric[i]){
            number = i;
            printf("\n---Result for %s---\n",stdName[i]);
            for(int j = 0; j < 4; j++){
                if(stdQuiz[i][j] >= 90 && stdQuiz[i][j] <= 100)
                    indexGrade = 0;
                else if(stdQuiz[i][j] >= 80)
                    indexGrade = 1;
                else if(stdQuiz[i][j] >= 70)
                    indexGrade = 2;
                else if(stdQuiz[i][j] >= 60)
                    indexGrade = 3; 
                else if(stdQuiz[i][j] >= 50)
                    indexGrade = 4; 
                else if(stdQuiz[i][j] >= 40)
                    indexGrade = 5; 
                else if(stdQuiz[i][j] >= 30)
                    indexGrade = 6; 
                else
                    indexGrade = 7;
                printf("Quiz %d:\t%d\t%s\n",j+1,stdQuiz[number][j],grade[indexGrade]);
            }
            return 0;
        }
    }
    return 1;
}



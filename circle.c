#include <stdio.h>
#include <string.h>
#include <math.h>

double circumference(double a);
double area(double b);

int main(){

    double r;

    printf("Enter the radius(r) : ");
    scanf("%lf",&r);

    double k = circumference(r);
    double j = area(r);

    printf("Circumference : %.2lf\n",k);
    printf("Area : %.2lf",j);
    return 0;
}

double circumference(double a){

    return 2*M_PI*a;
}

double area(double a){

    char str[1000];
    printf("Degree or Radian ? \n");
    scanf("%s",&str);

    strlwr(str);

    if(str == "degree"){
        return M_PI*a*a;
    }
    else{
       return ((M_PI*a*a)*(M_PI/180));
    }

}
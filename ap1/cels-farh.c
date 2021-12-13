#include <stdio.h>
int main(){
    float fahr, celsios;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 30;
    printf("____________________________\n");
    fahr = lower;
    while (fahr <= upper){
        celsios = 5*(fahr-32)/9;
        printf(" %3.2f\t%6.2f \n ",fahr, celsios);
        fahr = fahr + step;
        }
     printf("____________________________\n");
}
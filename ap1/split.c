#include <stdio.h>
int main () {
    int num, cent, dez, unid ;
    printf( "Escreva um número inteiro com 3 algarismos   ");
    scanf("%d",&num);
    if  (num < 1000){
        unid= num%10 ;
        dez = (num%100)/10;
        cent = num/100;
        printf("%d \n%d \n%d  \n",cent, dez, unid);
    }
    else ;
    printf("try again\n");
}
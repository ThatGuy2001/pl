#include <stdio.h>
int main () {
    int num, cent, dez, unid ;
    printf( "Escreva um número inteiro com 3 algarismos   ");
    scanf("%d",&num);
    if  (num < 1000){
        unid= num%10 ;
        dez = (num%100)/10;
        cent = num/100;
    }
    else {
    printf("try again\n");
    }
    if (unid == cent)
    {
        printf("O número %d é capicua\n",num);

    }
    else
    {
        printf("O número %d não é capicua\n",num);
    }
    
}
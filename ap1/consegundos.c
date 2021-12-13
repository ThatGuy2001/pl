#include <stdio.h>
int main() {
    int x, dias, horas, minutos, segundos;
    printf("Insira o número de segundos: \n");
    scanf("%d",&x);
    dias = x/86400;
    horas = (x%86400)/3600;
    minutos = (x%3600)/60;
    segundos = (x%60);
    printf(" dias: %d \n horas: %d \n minutos: %d \n segundos: %d \n ", 
    dias,horas, minutos, segundos );

}
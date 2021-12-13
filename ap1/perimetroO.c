#include <stdio.h>

int main(){
    float raio, P, A, V, pi;
     pi=3.141593;

printf("Digite o raio\n");
scanf("%f", &raio);
P = 2*pi*raio;
A = pi*(raio*raio);
V = ((4*pi)/3)*(raio*raio*raio); 
printf("Os valores do perímetro da circunferencia, área do\n circulo e volume da esfera sao, respectivamente:\n %f ; %f ; %f\n", P, A, V);
}
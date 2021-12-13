#include <stdio.h>

int main() {
    float soma=0, num;

    do{
        printf("Qual o número? ");
        scanf("%f", &num);
        soma = soma + num;
    }
    while ( num != 0);
    
    printf("A soma é: %.2f \n ", soma);
    
    
}
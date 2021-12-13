#include <stdio.h>

int main() {
    float soma, num;
    
    for (; num !=0  ; soma = soma + num)
    {
        num = 0;
        printf("Qual o número? ");
        scanf("%f", &num);
    }
    
     printf("A soma é: %.2f \n ", soma);
    
    
}
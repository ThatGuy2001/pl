#include <stdio.h>

int main(){
    float media, num, i, soma;

    printf("Qual o primeiro valor? ");
    scanf("%f",&num);
    i = 1;
    soma= num;
    media = soma/i;
    while (num != 0)
    {
        printf("Qual o próximo valor? ");
        scanf("%f",&num);
        if (num == 0){
            break;
        }
        soma = soma + num;
        i++;
        media = soma/i;
        
    }
    printf("Valores introduzidos: %.0f\n",i);
    printf("Média: %.2f\n", media);
}
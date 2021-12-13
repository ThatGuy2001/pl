#include <stdio.h>
int main() {
    int num;
    float real;
    char letra ;
    printf("Estreva um numero real: \n");
    scanf("%f",&real);
    printf("Escreva uma letra: \n");
    scanf(" %c", &letra);
    printf("Escreva um numero inteiro: \n");
    scanf("%d",&num);
    printf("%d %c %f",num, letra, real);

}
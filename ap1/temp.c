#include <stdio.h> 
int main() {
    float k, c, f ;
    printf("Intruduza o temperatura em graus Celcios  ");
    scanf("%f", &c);
    k = c+273.5;
    f = c*9/5+32;
    printf("  A temperatura em Kelvin é:%.2f \n graus e em Fahrenheit é: %.2f graus \n", k, f);
    
}
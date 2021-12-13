#include <stdio.h> 
int main () {
    int x, y;
    printf("introduza os valores de x e y  ");
    scanf("%d %d", &x, &y);
    
    printf(" soma: %d", x+y);
    printf(" diferença: %d",x-y);
    printf(" produto: %d", x*y);
    printf(" divisão: %d", x/y);
    printf(" resto: %d", x%y);
    
}
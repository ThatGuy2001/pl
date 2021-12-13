#include <stdio.h>

int main() {
    int x, y;
    printf("Indique as cordenada de x e y\n");
    scanf(" %d",&x);
    scanf(" %d",&y);
    if (x>0 && y>0)
    {
      printf("O ponto pertence ao primeiro quadrante\n");
    }
    else if (x<0 && y<0)
    {
       printf("O ponto pertence ao terceiro quadrante\n");  
    } 
    else if (x<0 && y>0)
    {
       printf("O ponto pertence ao segundo quadrante\n"); 
    }   
    else if (x>0 && y<0)
    {
      printf("O ponto pertence ao quarto quadrante\n");    
    }
    
    

}
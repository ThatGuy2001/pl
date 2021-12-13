#include <stdio.h>

int main() {

    int x, y, z;

    printf("Escreva 3 números inteiros diferentes\n");
    scanf("%d %d %d",&x, &y, &z);
    if ((x<y && y<z) || (z<y && y<x) )
    {
        printf("É o numero %d\n ",y);
    }
    else if ((y<x && x<z) || (z<x && x<y))
    {
        printf("É o numero %d\n",x);
    }
    else if ((x<z) && (z<y) || (y<z) && (z<x))
    {
        printf("É o numero %d\n",z);
    }
    
  

}
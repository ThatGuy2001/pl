#include <stdio.h>

int main() {
     int x, y,i;
     printf("Insira dois numeros reais:\n");
     scanf("%d %d", &x , &y); 
     if (x==y)
     {
        i = 0;
     }
    else if (x<y)
    {
        i = -1;
    }
    else if (x>y)
    {
        i = 1;
    }
    printf("%d\n",i);
     
     

}
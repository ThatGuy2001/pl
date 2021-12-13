#include <stdio.h>
 
 int main() {
     int a, b, r;
     printf("Escreva dois numeros:");
     scanf("%d %d",&a,&b);
     r= a%b;
     if (r==0)
     {
        printf("%d é multiplo de %d \n",a,b);
     }
     else 
    {
        printf("%d não é multiplo de %d \n",a,b);
    }
    
     

      
       

 }
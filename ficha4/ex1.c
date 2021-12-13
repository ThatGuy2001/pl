#include <stdio.h>

int main() 
{
    int num,r,p;
    printf("Insira o seu numero:");
    scanf("%d",&num);
    r = num%3;
    p = num%2;
    if (r==0 && p == 0)
    {
        printf("%d é multiplo de 3 e par\n",num);

    }
    else if (r == 0 &&  p!= 0)
    {
      printf("%d é multiplo de 3 e impar\n",num);  
    } 
    else if (r != 0 && p == 0 )
    {
        printf("%d é  não é multiplo de 3 e par\n",num);
    }
    else
    {
        printf("%d nãoé multiplo de 3 e impar\n",num);
    }
}
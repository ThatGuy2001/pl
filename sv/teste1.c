#include <stdio.h>

int main(){
    int a,b, i=1;

    printf("Valor de a:");
    scanf("%d",&a);
    printf("Valor de a:");
    scanf("%d",&b);

    while (i <= 50)
    {
        if (a%i == 0 || b%i == a)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
}
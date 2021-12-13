#include <stdio.h>
int main() {
    int num, i;
    printf("Qual o limite da contagem? ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        printf("%d\n",i);
    }
    for  (i = num-1; i >=0; i--)
    {
        printf("%d\n",i);
    }
    
}
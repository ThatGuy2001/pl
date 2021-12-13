#include <stdio.h>

int pascal(int l, int c){
    if (c==l || c==0)
    {
        return 1;
    }
    else
    {
        return pascal(l-1,c-1) + pascal(l-1,c);
    }
}

int main(){
    int l,c;
    printf("Qual o número da linha e o numero da coluna?");
    scanf("%d %d",&l ,&c);
    printf("%d\n",pascal(l,c));
}
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

int tpascal(int n){
    int l,c;
    for ( l = 0; l<=n ; l++)
    {
        for ( c=0; c <= l; c++)
        {
            printf("%d ",pascal(l,c));
        }
        printf("\n");
    }
}


int main(){
    int n;

    printf("Qual o indice do triangulo de Palcas?");
    scanf("%d",&n);
    tpascal(n);

}
#include <stdio.h>

float media(float v[],int sz){
    int i;
    int soma=0;
    for ( i = 0; i < sz; i++)
    {
       soma += v[i];                                            
    }
    return soma/sz;
}
float minimo(float v[],int sz){
    int i;
    int comparador=v[0];
    for ( i = 0; i < sz; i++)
    {
        if (comparador > v[i])
        {
            comparador = v[i];
        }   
    }
    return comparador;
}
float maximo(float v[],int sz){
    int i;
    int comparador=v[0];
    for ( i = 0; i < sz; i++)
    {
        if (comparador < v[i])
        {
            comparador = v[i];
        }   
    }
    return comparador;
}
void printvetor(float v[], int sz){
    int i;
    for ( i = 0; i < sz; i++)
    {
        printf("%.2f ",v[i]);
    }
    printf("\n");
}
int main(){
    float v[10];
    int i;

    printf("Escreva 10 números reais ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%f",&v[i]);
    }
    printf("A média é %f \n",media(v,10));
    printf("O menor elemento é %f \n",minimo(v,10));
    printf("O maior elemento é %f \n", maximo(v,10));
    printvetor(v,10);


}
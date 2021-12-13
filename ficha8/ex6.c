#include <stdio.h>


float medias(int v[],int sz){
    int i;
    int contador,comparador;
    float soma;

    for (comparador=20,contador=0, i = 0; i < sz; i++)
    {
        if (comparador > v[i]  )
        {
            contador=i;
            comparador = v[i];
        }
        
    }
    v[contador]=0;
    for (comparador=-1,contador=0, i = 0; i < sz; i++)
    {
        if (comparador < v[i]  )
        {
            contador=i;
            comparador = v[i];
        }
        
    }
    v[contador]=0;
    
 
    for ( soma=0,i = 0; i < sz; i++)
    {
        soma = soma+v[i];
    }
    return soma/13;


}

int main(){
    int notas[15];
    int i;
    float media;

    for ( i = 0; i < 15; i++)
    {
        scanf("%d",&notas[i]);
    }
    printf("A média é %f",medias(notas,15));
    


}
#include <stdio.h>


float medias(int v[],int sz){
    int i,i2,i3=0;
    int contador,comparador;
    float soma;

    for ( i = 0; i < sz, i3<3; i++)
    {
        if (v[i] == -1)
        {
            v[i]=0;
            i3++;
        }
        
    }
    

    for (comparador=20,contador=0, i = 0; i < sz; i++)
    {
        if (comparador > v[i] && v[i]!=0  )
        {
            contador=i;
            comparador = v[i];
        }
        
    }
    v[contador]=0;
    for (comparador=-1,contador=0, i = 0; i < sz; i++)
    {
        if (comparador < v[i] && v[i]!= 0 )
        {
            contador=i;
            comparador = v[i];
        }
        
    }
    v[contador]=0;
    
    for ( i2=0,i = 0; i <sz; i++)
    {
        if (v[i]!=0)
        {
            i2++;
        }
        
    }
    
    for ( soma=0,i = 0; i < sz; i++)
    {
        soma = soma+v[i];
    }
    return soma/i2;


}

int main(){
    int notas[15];
    int i;
    float media;

    for ( i = 0; i < 15; i++)
    {
        scanf("%d",&notas[i]);
    }
    printf("A média é %f\n",medias(notas,15));
    
}
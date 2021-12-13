#include <stdio.h>


float primeiro(float v[],int sz){
    int i;
    float primeiro= 1000;
    for ( i = 0; i < sz; i++)
    {
        if(primeiro > v[i] )
        {
        primeiro = v[i];
        }
    }
    return primeiro;
}
float segundo(float v[], int sz){
    int i;
    float p = primeiro(v,sz);
    float seg = 1000;
    for ( i = 0; i < sz; i++)
    {
        if (v[i] != p && seg > v[i])
        {
            seg = v[i];
        }
    }
    return seg;

}

float terceiro(float v[],int sz){
    int i;
    float seg = segundo(v,sz);
    float trc=1000;

    for ( i = 0; i < sz; i++)
    {
        if ( v[i] > seg && trc > v[i])
        {
           trc = v[i];
        }
        
    }
    return trc;
    
}


int main(){ 
    float temps[100];
    int n,i;
    printf("Quantos tempos prentende inserir?");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Tempo do atleta %d ",i+1);
        scanf("%f",&temps[i]);
    }
    printf("O melhor tempo foi %.2f\n",primeiro(temps,n));
    printf("O segundo melhor tempo foi %.2f\n",segundo(temps,n));
    printf("O terceiro melhor tempo foi %.2f\n",terceiro(temps,n));
}
#include <stdio.h>

int somatorio(int v[], int sz){
    int i,soma;
    
    for (soma=0, i = 0; i < sz; i++)
    {
        soma += v[i];
    }
    return soma;

}
void printvetor(int v[], int sz){
    int i;
    for ( i = 0; i < sz; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main(){
    int num,i;
    int v[15];
    printf("Qual o tamanho do vetor(até 15)?");
    scanf("%d",&num);

    for ( i = 0; i < num; i++)
    {
        scanf("%d",&v[i]);
    }

    printvetor(v,num);
    printf("O somatório é %d \n ",somatorio(v,num));
}
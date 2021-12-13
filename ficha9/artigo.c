#include "artigo.h"

int compararstrg(char s[],char b[],int sz){
    int i;
    for ( i = 0; i < sz; i++)
    {
        if(s[i] == b[i])
        return 1;
        else
        {
            return 0;
        }
    }
}
void print_artigo(artigo_t a){

    printf("Nome: %s",a.nome);
    printf("Tipo: %s",a.tipo);
    printf("Marca: %s",a.marca);
    printf("Modelo: %s",a.modelo);
    printf("%.2f€\n",a.preco);
    printf("%d unidades\n",a.unid);

}
void novo_artigo(artigo_t *a){
    char aux[10];
    printf("Nome: ");
    fgets(a->nome,N,stdin);
    printf("Tipo: ");
    fgets(a->tipo,N,stdin);
    printf("Marca: ");
    fgets(a->marca,N,stdin);
    printf("Modelo: ");
    fgets(a->modelo,N,stdin);
    printf("Preço: ");
    scanf("%f",&(a->preco));
    printf("Quantidade: ");
    scanf("%d",&(a->unid));
    fgets( aux,10, stdin);
}
void total_artigo(artigo_t a[],char marca[],char modelo[],int sz){
    int i;

    for ( i = 0; i < sz; i++)
    { 
        
        if(compararstrg(marca,a[i].marca,N) ==1 &&  compararstrg(modelo,a[i].marca,N) == 1)
        {
            printf("O número de unidades no armazem é %d \n",a[i].unid);
        }
        
    }
    
}

void alerta(artigo_t a[],int sz){
    int i;
    for ( i = 0; i < sz; i++)
    {
        if (a[i].unid<10)
        {
            printf("O artigo %s tem apenas %d unidades em stock\n", a[i].nome,a[i].unid );
        }   
    }
}

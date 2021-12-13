#include <stdio.h>
#include <ctype.h>
int tamanho(char s[],int sz){
    int i;
    for ( i = 0; i < sz; i++)
    {
        if (s[i]== 0)
        {
            break;
        }
    }
    return i;
}
int ocorrencias3(char s[],int sz,char c,int indice){    
    int i,ocorrencias=0;

    c=tolower(c);
    for ( i = 0; i < sz; i++)
    {
        s[i]= tolower(s[i]);
    }
    

    for ( i = indice; i < sz; i++)
    {
        if ( c== s[i]) 
        {
            ocorrencias++;
        }
        
    }
    return ocorrencias;

}
int main(){
    int sz,indice;
    char s[20];
    char c;
    printf("Escreva uma palavra: ");
    scanf("%s",s);
    sz=tamanho(s,20);
    printf("Qual a letra que quer verificar?");
    scanf(" %c",&c);
    printf("Qual o indice do qual quer verificar?");
    scanf("%d",&indice);
    printf("A letra ocorre %d vezes \n",ocorrencias3(s,sz,c,indice));
    
    
}
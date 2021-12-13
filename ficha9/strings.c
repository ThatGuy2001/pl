#include "strings.h"
void escreve(char s[],int sz){
    int i;
    for ( i = 0; i < sz ; i++)
    {
        printf("%c",s[i]);  
    }
    printf(" ");
}
int vogal(char c){
    char vogs[11]="aAeEiIoOuU";
    int i;
    for ( i = 0; i < 10; i++)
    {
        if(vogs[i]==c)
        {
            return 1;
        }
    }

}
int conta_vogais(char s[],int sz){
    int i,vogais=0;
    char c;
    for ( i = 0; i < sz; i++)
    {
       
        if (vogal(s[i])==1)
        {
            vogais++;
        }
    }
    return vogais;
}
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

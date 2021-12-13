#include "strings.h"
int main(){
   
    int sz;
    char s[20];
    printf("Escreva uma palavra: ");
    scanf("%s",s);
    sz=tamanho(s,20);
    printf("A palavra ");
    escreve(s,sz);
    printf("tem %d vogais\n",conta_vogais(s,sz));
    
    }
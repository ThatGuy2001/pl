#include <stdio.h>
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

void espelho(char s[],int sz){
    int i;
    for ( i = 0; i < sz; i++)
    {
        printf("%c",s[i]);
    }
    for ( i = sz-1; i >= 0; i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}
int main(){

    char s[20];
    int sz;

    printf("Escreva uma palavra: ");
    scanf("%s", s);
    sz = tamanho(s,20);
    espelho(s,sz);

}
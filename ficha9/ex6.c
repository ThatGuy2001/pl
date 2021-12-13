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
    printf(" ");
    for ( i = sz-1; i >= 0; i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}
void palindromo(char s[],int sz){
    int i,i2,palin=0;
    for ( i = 0,i2=sz-1; i < sz ,i2>=0; i++,i2--)
    {
        if (s[i]==s[i2])
        {
            palin=1;        
        }
        else
        {
            palin=0;
            break;
        }  
    }
    if (palin==0)
    {
        printf("Não é palindromo\n");
    }
    else
    {
        printf("É palindromo\n");
    }  
}
int main(){
    char s[20];
    int sz;

    printf("Escreva uma palavra: ");
    scanf("%s", s);
    sz = tamanho(s,20);
    espelho(s,sz);
    palindromo(s,sz);

}
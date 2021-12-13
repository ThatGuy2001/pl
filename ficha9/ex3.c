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
void letras(char s[],int sz){
    int i;
    for ( i = sz-1; i >=0 ; i--)
    {
        printf("%c\n",s[i]);  
    }
    
}
void letras2(char s[],int sz){
    int i=sz-1;
    while (i >= 0)
    {
        printf("%c\n",s[i]); 
        i--;
    }
}

int main(){
    char s[20];
    int sz;
    printf("Escreva uma palavra: ");
    scanf("%s", s);
    sz=tamanho(s,20);
    letras2(s,sz);

}
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

void subescada(char s[],int sz){
    int i,i2;
    for (i2 = tamanho(s,sz); i2 >=0; i2--)
    {
       
        for ( i = 0; i < i2; i++)
        {
        printf("%c",s[i]);
        }
        printf("\n");
    }

}
int main(){
    char s[20];

    printf("Escreva uma palavra: ");
    scanf("%s", s);
    subescada(s,20);
}
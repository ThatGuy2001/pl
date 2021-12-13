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
int main(){
    char s[20];

    printf("Escreva uma palavra: ");
    scanf("%s", s);
    printf("O comprimento da string é %d \n ",tamanho(s,20));

}
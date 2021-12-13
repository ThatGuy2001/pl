#include <stdio.h>
void letras(char s[],int sz){
    int i;
    for ( i = 0; i < sz; i++)
    {
        if (s[i]==0)
        {
            break;
        }
        printf("%c\n",s[i]);  
    }
    
}
void letras2(char s[],int sz){
    int i=0;
    while (i < sz)
    {
        if (s[i]==0)
        {
            break;
        }
        printf("%c\n",s[i]); 
        i++;
    }
}

int main(){
    char s[20];

    printf("Escreva uma palavra: ");
    scanf("%s", s);
    letras2(s,20);

}
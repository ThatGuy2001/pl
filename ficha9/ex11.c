#include <stdio.h>
int conta_palavras(char s[],int sz ){
   char c[3]={" ,"};
   int i;
   int contador=0;
   for ( i = 0; i <= sz; i++)
   {  
      if (s[i] == c[0] || s[i] == c[1] || s[i] == c[2] && s[i+1] == c[0] || s[i+1] == c[1] || s[i+1] == c[2])
      {
         contador++;
         i=i+2;
      }
      else if(s[i] == c[0] || s[i] == c[1] || s[i] == c[2])
      {
         contador++;
      }
      
      
   }
   
   return contador;
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
int main () {
   char str[50];
   int n;
   printf("Enter a string : ");
   fgets(str,50,stdin);
   n = conta_palavras(str,tamanho(str,50));
   printf("%d\n",n);
   printf("You entered: %s", str);


   
}
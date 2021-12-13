#include <stdio.h>

int matriz_identidade(int m[][10],int n,int n2){
    int i,j;
      for (i = 0; i < n; i++)
      {
        for ( j = 0; j < n; j++)
        {
          if (i==j && m[i][j] != 1)
          {
            return 0;
          }
          else if (i!=j && m[i][j]!=0)
          {
            return 0;
          }
          
        }          
      return 1;
      }
}


int main(){

  int m[10][10]={{1,1,0},{0,1,0},{0,0,1}};

printf("%d",matriz_identidade(m,3,3));


}

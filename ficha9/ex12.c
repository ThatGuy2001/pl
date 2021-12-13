#include "artigo.h"

int main(){
    
    artigo_t artigo[D];
  
    char marca[N],modelo[N];
    int i, sz = D;

     for ( i = 0; i < D; i++)
    {
      novo_artigo(&artigo[i]);
    }

   alerta(artigo,D);

}
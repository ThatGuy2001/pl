#include <stdio.h>


int numalg(int n,int b){
    
    
    if(n == 1 || n == 0){
        return 0;
    }
    return  1+ numalg(n/b,b);
  
}
int main(){

    printf("%d",numalg(10,2));
}
#include <stdio.h>
int existe_elemento(int v1,int v2[],int d2){
    int i;
    for ( i = 0; i < d2; i++)
    {
        if (v1 == v2[i] )
        {
            return 1;
        }  
    }
    return 0;
}
int conta_elementos(int v1[],int v2[],int d1,int d2 ){
    int i,ncomuns = 0;
    for (i= 0; 1 < d1 ; i++)
    {
        if (existe_elemento(v1[i],v2,d2) == 1)
        {
        ncomuns++;
        }
    }
    return ncomuns;
}

int main(){
    int a[3]={1,2,2}, b[5]={1,2,3,4,5}, c[2]={2,4} ,d[2]={7,8},e[4]={1,2,4,3};
    
    printf("%d \n ",conta_elementos(b,c,5,2));
    printf("%d \n ",conta_elementos(b,d,5,2));
    printf("%d \n ",conta_elementos(b,a,5,3));
}
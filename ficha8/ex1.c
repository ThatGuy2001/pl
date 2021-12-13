#include <stdio.h>

int ver_order(int vec[], int sz){
    int i;
    
    for  (i = 0; i+1 < sz ; i++)
    {
        if (!(vec[i] <= vec[i+1]))
        {
           return 0;   
        }
    }
    return 1;
}
int main(){
   int a[3]={1,2,2}, b[5]={1,2,6,4,5}, c[2]={2,4} ,d[2]={9,8},e[4]={1,2,4,3}; 
  

    printf("%d \n ",ver_order(a,3));
    printf("%d \n ",ver_order(b,5));
    printf("%d \n ",ver_order(c,2));
    printf("%d \n ",ver_order(d,2));
    printf("%d \n ",ver_order(e,4));

}
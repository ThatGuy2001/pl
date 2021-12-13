#include <stdio.h>


int main(){
    int *p;
    int c[5]={1,2,3,4,5};

    p = &c[0];
    c[0]= 5;
    printf("%d",*(p+3));


}
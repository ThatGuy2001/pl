#include <stdio.h>
    int main(){
        int num,unid,dez, cent,res;
         
         printf("Insira um numero de 3 algarismos ");
         scanf("%d",&num);
        unid= num%10 ;
        dez = (num%100)/10;
        cent = num/100;
        
        res = (unid*unid*unid)+(dez*dez*dez)+(cent*cent*cent);

        if(res == num)
        {
            printf("O número %d é igual á soma dos seus algarismos\n ",num);

        }
        else
        {
            printf("O número %d não é igual á soma dos seus algarismos\n ",num);
        }
        

    }

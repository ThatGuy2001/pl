#include <stdio.h>
#include <stdlib.h>

int main() {
    int pc[100], i,pl1,w,l,t;

    for (i=0; i<100; i++)
    { 
        pc[i]=rand()%3+1;
    }
    for(i=0;i<100; i++)
    {
        printf("%d  %d\n",i,pc[i]);
    }
    i=t=w=l=0;
    printf(" Escolha um:\n 1-Pedra\n 2-Papel \n 3-Tesoura\n 4-Sair\n");
    scanf("%d",&pl1);
    while (pl1>0 && pl1<4 && i<100)
    {

        if (pl1 == pc[i] )
        {
            printf("EMPATE\n");
            t++;
        }
        else if(pl1==1 && pc[i]==2)
        {
            printf("PERDEU\n");
            l++;
        }
        else if (pl1==1 && pc[i]==3)
        {
            printf("GANHOU!!!\n");
            w++;
        }
        else if (pl1==2 && pc[i]==1)
        {
            printf("GANHOU!!!\n");
            w++;
        }
        else if (pl1==2 && pc[i]==3)
        {
            printf("PERDEU\n");
            l++;
        }
        else if (pl1==3 && pc[i]==1)
        {
            printf("PERDEU\n");
            l++;
        }
        else if (pl1==3 && pc[i]==2)
        {
            printf("Ganhou!!!\n");
            w++;
        }
        i++;
        scanf("%d",&pl1);
        
        printf(" Ganhou:%d vezes\n Empatou:%d vezes\n Perdeu:%d vezes\n",w,t,l);

    }
    printf(" Ganhou:%d vezes\n Empatou:%d vezes\n Perdeu:%d vezes\n",w,t,l);
}
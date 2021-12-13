#include <stdio.h>
int main() { 
    int sprinkler, squares, sktipe, tentativas;
    tentativas=0;
    printf(" Quantos quadrados pretende regar? \n ");
    scanf("%d",&squares);
    printf(" Qual o tipo de expressores?\n 1-Sprinkler\n 2- Quality Sprinkler\n 3-Iridium Sprinkler\n");
    scanf("%d",&sktipe);
    
    while (sktipe>3)
    {
        tentativas= tentativas + 1;
        printf(" Introduza valor valido\n");
        scanf("%d",&sktipe);
        if (tentativas > 2 && sktipe>3)
        {
         printf(" Qual o tipo de expressores?\n 1-Sprinkler\n 2- Quality Sprinkler\n 3-Iridium Sprinkler\n"); 
         tentativas = 0;
        }
        
    }
    
    if (0<sktipe<4)
    {    if (sktipe == 1)
        {
            sprinkler = squares/4;
            if (squares%4 > 0)
            {
                sprinkler = sprinkler+1;
            }
            
            printf("You're going to need: %d sprinklers\n",sprinkler);
        }
        if (sktipe == 2)
        {
            sprinkler = squares/8;
            if (squares%8 > 0)
            {
                sprinkler = sprinkler+1;
            }
            printf("You're going to need: %d Quality sprinklers\n",sprinkler);
        }
        if (sktipe == 3)
        {
            sprinkler = squares/24;
            if (squares%24 > 0)
            {
                sprinkler = sprinkler+1;
            }
            printf("You're going to need: %d Iridium sprinklers\n",sprinkler);
        }
      
    }    
      
}
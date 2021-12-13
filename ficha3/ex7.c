#include <stdio.h>

int main() {
    float gasoleo, g95, g98,lt,preco;
    int tipo,dia;
    gasoleo=1.711; g98 = 1.838; g95 = 1.798;
    printf("Quantos litros vai abastecer? ");
    scanf("%f",&lt);
    printf("\n Qual o tipo de combustivel? \n 1-Gasóleo \n 2-Gasolina 95 \n 3- Gasolina 98 \n");
    scanf("%d",&tipo);
    preco = g98*lt;
    if (tipo == 1 || tipo == 2 )
    {
        printf("Em que dia vai abastecer? ");
        scanf("%d", &dia);
        if (dia >= 15)
            {
                gasoleo = gasoleo + 0.023;
                g95 = g95 + 0.021;
            }
        
        preco =g95*lt;
        if(tipo == 1 )
        {
            preco = gasoleo*lt;
        }
        
        
    }
   
    printf("O preço a pagar é %.2f \n",preco);

}
#include <stdio.h>

int main() {
    float d,v;
    printf(" A que velocidade se desloca o veiculo?\n");
    scanf("%f",&v);
    d = 0.5* ((v/10)*(v/10));  
    printf("A distancia de travagem é %.2f m \n",d);
}
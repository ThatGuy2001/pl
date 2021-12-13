#include <stdio.h>
 int main() {
     float a, x, y, epsilon;
     printf("Introduza um número: ");
     scanf("%f", &a);
     epsilon = 0.00001;
     x = a/2;
     y = (x+a/x)/2;
      while( (y-x)*(y-x) >= epsilon*epsilon )
      {
        x = y;
        y = (x+a/x)/2;
      }
      printf( "A raiz quadrada é %.2f.\n", y );
}


 

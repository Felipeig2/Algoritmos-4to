#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    double pi = 3.14159;
    int n = atoi(argv[1]);
    double guardo = 0.0;
    double suma = 0;
    double es_igual_a_pi = 0.0;
for(int i = 1; i <= n; i++){
    double resultado = 1.0 / (i * i);
    suma += resultado;
    es_igual_a_pi = sqrt(suma * 6.0);

printf("Es %.5f = %.5f? ", es_igual_a_pi, pi);
if(fabs(es_igual_a_pi - pi) < 0.000001){ 
      printf("SI\n");
      return 0;
    }
    printf("NO\n");
  }
    return 0;
}
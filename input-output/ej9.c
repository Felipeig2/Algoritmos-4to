#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int n, a, b;
    srand(time(NULL));
    printf("Intenta adivinar el numero aleatorio entre 1 y 1000\n");
    int num_al = rand() % 1000 + 1;
    
    while(n != num_al){
    scanf("%d", &n);
    int value = scanf("%d", &n);
    if(1000 < n && n < 1 || value != 1){
        printf("El numero ingresado es invalido. Intentalo de nuevo");
        break;
    }
  
    
    
    if(n > num_al){
        printf("El numero que pusiste es mayor(%d)\n", n);
    }
    else if (n < num_al){
        printf("El numero que pusiste es menor(%d)\n", n);
    }
    else if(n == num_al){
        printf("Acertaste, fin del juego. El numero era %d", n);
        break;
    }
  }
}
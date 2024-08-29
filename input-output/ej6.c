#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
srand(time(NULL));
int a, b, n, p;
n = rand() % 5 + 1;

printf("Ingrese 2 numeros: ");
scanf("%d", &a);
scanf("%d", &b);
printf("Tenes %d intentos para obtener un numero entre %d y %d: ", n, a, b);

    for(int i = 0; i < n; i++){
        
        scanf("%d", &p);
    if((p > a && p < b) || (p < a && p > b)){
        printf("%d esta entra %d y %d", p, a, b);
        break;
    }
    else if(i < n-1){
        printf("Intenta de nuevo: ");
    }
    else if(i >= n-1){
        printf("Te quedaste sin intentos");
        break;
    }
}
}
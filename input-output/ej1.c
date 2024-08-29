#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, num, suma = 0;
    
    scanf("%d", &n);
    printf("Usted va a sumar %d numeros ", n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        suma += num;
    }
    printf("La suma de los %d numeros dio %d", n, suma);
    
    return 0;   
}
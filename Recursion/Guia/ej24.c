#include <stdio.h>
#include <stdlib.h>

int sumarArrays(int array[], int n) {
    if (n == 0) return 0;
    return sumarArrays(array, n - 1) + array[n - 1]; 
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5}; 
    int resultado = sumarArrays(array, 5);
    printf("%d\n", resultado); 
    return 0;
}

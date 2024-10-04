#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, num;
    
    scanf("%d", &n);
    printf("Este programa no para hasta que no encuentre un 0. Tenes %d intentos \n", n);
    
    for(int i = 0; i < n; i++){
        
        scanf("%d", &num);
        if(num == 0){
            
            printf("Se encontro un 0");
            break;
        }
        
    }
    
}
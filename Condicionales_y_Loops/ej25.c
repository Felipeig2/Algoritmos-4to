#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int n = atoi(argv[1]);
    if ( n > 1){
for(int i = 0; i <= n; i +=2){
    printf("El %d\n", i);
} 
    }
    else{
        printf("jsjsjs re boludo. El numero tiene que ser mas grande que 1 men");
    }
    return 0;
}
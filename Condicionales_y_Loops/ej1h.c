#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    int n = atoi(argv[1]);
    int num = 0;
    for(int i = 1; i <= n; i++){

        num = i;
        
        printf("%d su cuadrado es %d\n", num, num*num);

    }
        return 0;
    }
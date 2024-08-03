#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

int n = atoi(argv[1]);
int num = 0;

for(int i = 0; i <= n; i++){

    num += i;

}

printf("La suma de los numeros naturales da %d", num);

    return 0;
}
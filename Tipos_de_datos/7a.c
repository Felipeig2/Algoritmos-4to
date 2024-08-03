#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int num_al(int a){

 return rand() % a;

}

int main(int argc, char *argv[]){
int a = atoi(argv[1]);
srand(time(NULL));

printf("Tu numero aleatorio es %d", num_al(a));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(int argc, char *argv[]){
    srand(time(NULL));
    int dado = rand() % 8 + 1;
    if ( dado <= 6){
        dado = dado;
    }
    else{
        dado = 6;
    }
printf("El numero del dado es %d", dado);
return 0;

} // banco att: porta

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    char mediopago = argv[1][0];
    int prec = atoi(argv[2]);
    int cant = atoi(argv[3]);
    double total = prec * cant;

    if (mediopago == 'e') {
      printf("%.2f\n", total * 0.85);
    }
    else if (mediopago == 't'){
      printf("%.2f\n", total * 0.90);
    }
    else if (mediopago == 'c'){
    printf("%.2f\n", total * 0.95);
    }
    else if (mediopago == 'd'){
    printf("%.2f\n", total * 1.0);
    }



    // printf("Compraste un total de %d, y te sale %d", cant, prec);
    return 0;
}
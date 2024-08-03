#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    double D = ((b*b)-(4*a*c));
    double x1 = (-b + sqrt(D)) / (2*a);
    double x2 = (-b - sqrt(D)) / (2*a);
    if (D == 0){
        printf("La raices son iguales. valen %f", x1);
    }
    else if (D > 0){
        printf("Tiene dos raices las cuales son %f, %f", x1, x2);
    }
    else{
        printf("No tiene solucion");
    }
    return 0;
}
//Escribirunprogramaqueaceptedosnúmerosenteros𝑎y𝑏ycalculesucociente. Siladivisióndelosnúmeros
 //notienerestoigualaceroentoncesimprimir“Nosepuedendividir”ysalirdelprograma.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
int a = atoi(argv[1]);
int b = atoi(argv[2]);

if (a % b == 0){
    int coc = a / b;
    printf("%d\n", coc);
}
else{
    printf("No se pueden dividir");
}

}
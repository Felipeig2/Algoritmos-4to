// Que pida 3 números y los muestre en pantalla de menor a mayor
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    int n1 = atoi(argv[1]);
    int n3 = atoi(argv[2]);
    int n2 = atoi(argv[3]);


if(n1 > n2 && n2 > n3){
    printf("DE mayor a menor seria: %d %d %d", n1, n2, n3);
}
if(n1 > n3 && n3 > n2){
    printf("DE mayor a menor seria: %d %d %d", n1, n3, n2);
}
if(n2 > n1 && n1 > n3){
    printf("DE mayor a menor seria: %d %d %d", n2, n1, n3);
}
if(n2 > n3 && n3 > n1){
    printf("DE mayor a menor seria: %d %d %d", n2, n3, n1);
}
if(n3 > n2 && n2 > n1){
    printf("DE mayor a menor seria: %d %d %d", n3, n2, n1);
}
if(n3 > n1 && n1 > n2){
    printf("DE mayor a menor seria: %d %d %d", n3, n1, n2);
}


}
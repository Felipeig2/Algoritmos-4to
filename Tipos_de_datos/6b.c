#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char *argv[]){
bool triangle(int a, int b, int c);
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);
printf("%s", triangle(a, b, c) ? "Its a triangle" : "It is not a Triangle");
    return 0;
}
bool triangle(int a, int b, int c){
    return a + b > c && a + c > b && c + b > a;
}
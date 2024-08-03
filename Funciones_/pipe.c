#include<stdio.h>
#include<stdlib.h>

int main() { 
    saludar(); 
    return 0;

}
int saludar(int argc, char *argv[]) {
    char* nom = argv[1];
    printf("Hola, %s", nom);
return 0;
}
/*
void saludar (char *name) { 
printf("Hola, %s", name); 
}
saludar();
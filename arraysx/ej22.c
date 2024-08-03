#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
char *palabra = argv[1];
int i = 0;
while(palabra[i] != 0) i++;
if(i <= 10){
    printf("%s\n", palabra);
}else{
    printf("%c%d%c", palabra[0], i-2, palabra[i-1]);
}
return 0;
}
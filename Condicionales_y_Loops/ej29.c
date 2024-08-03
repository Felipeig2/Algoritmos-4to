#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[]){

int n = atoi(argv[1]);
double nam = 1.0;

for(int i = 2; i <= n; i++){
nam += (1.0 / i);

}
printf("el %d esimo numero armonico es %f", n, nam);
return 0;
}
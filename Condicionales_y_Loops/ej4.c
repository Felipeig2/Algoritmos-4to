#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  int factorial = 1;

  if (n >= 0) {

    for (int i = 1; i <= n; i++) {
      factorial *= i;

    }
  } 
  else {
    printf("Error");
  }
  printf("%d", factorial);
  return 0;
}
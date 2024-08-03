#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  double ang = atan2(x, y);
  printf("el angulo que hay entre %d y %d es %f.02", x, y, ang);




  return 0;
}
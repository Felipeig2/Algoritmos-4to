#include<stdio.h>
#include<stdlib.h>

int main(void){

  char temperatura;
  float grados = 0.0;
  float temperaturaFinal = 0;

  printf("Escriba 'C' si desea pasar la temperatura a Celsius, o si desea pasar la temperatura a Fahrenheit escriba 'F': ");
  scanf("%c", &temperatura);

  if(temperatura == 'C'){
    printf("Escriba cuantos grados va a pasar a Celsius: ");
    scanf("%f", &grados);
    temperaturaFinal = (grados - 32) / 1.8;
    printf("Su temperatura pasada a grados Celsius da: %.2f\n", temperaturaFinal);
  }
  else if(temperatura == 'F'){
    printf("Escriba cuantos grados va a pasar a Fahrenheit: ");
    scanf("%f", &grados);
    temperaturaFinal = (1.8 * grados) + 32;
    printf("Su temperatura pasada a grados Fahrenheit da: %.2f\n", temperaturaFinal);
  }
  else{
    printf("No puso ni 'F' ni 'C'.\n");
  }

  return 0;
}

/* Un apostador juega a cara o ceca apostando siempre $1,00 (un peso) por apuesta. Cuando gana duplica su
apuesta y cuando pierde, pierde lo que apostó. El apostador comienza con una cantidad de dinero 𝑠 y decide
dejar de apostar cuando llega a una cantidad 𝑔 de dinero. O cuando pierde todo su dinero. Usar un programa
para simular una cantidad 𝑡 de experimentos y determinar la probabilidad de que el apostador gane (llegue a su
objetivo) expresada en porcentaje. También reportar la cantidad promedio de apuestas por experimento. Los
argumentos del programa son 𝑠, 𝑔 y 𝑡 en ese orden, todos enteros */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int saldo, goal, apuesta, caraceca, cantidad_de_apuestas, ganadas, tries;
  double promedio_de_apuestas, probabilidad_de_ganar;
  goal = atoi(argv[2]);
  tries = atoi(argv[3]);

  caraceca; //variable que deterina si gana o no tomando los valores 1 y 0
  ganadas = 0; //cantidad de experimentos ganados
  cantidad_de_apuestas = 0; //cantidad de apuestas hechas en total

  // experimentos
  for (int i = 1; i <= tries; i++) {
  saldo = atoi(argv[1]);
  apuesta = 1; //la cantidad que pone cuando empieza a apostar
    // mientras su saldo sea mayor a 0 y no haya llegado a su objetivo
    while (saldo >= 0 && saldo <= goal) {
      caraceca = rand() % 2; // caraceca toma un valor aleatorio entre 1 y 0

      // si gana entonces se le suma lo que apostó a su saldo y duplica su apuesta
      if(caraceca){
        saldo += apuesta;
        apuesta *= 2;
      }
      // si pierde entonces se le descuenta lo que apostó de su saldo y empieza a apostar desde 1 devuelta
      else{
        saldo -= apuesta;
        apuesta = 1;
      }

      cantidad_de_apuestas++;
    }
    ganadas += saldo >= goal ? 1 : 0; //si ganó entonces le suma 1 a ganadas
  }
  probabilidad_de_ganar = ((double)ganadas / tries) * 100;
  promedio_de_apuestas = (double)cantidad_de_apuestas / tries;
  printf("%.0f%% de victorias\nPromedio de apuestas: %.2f\n", probabilidad_de_ganar, promedio_de_apuestas);
  return 0;
}
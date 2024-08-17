#include <stdlib.h>
#include <stdio.h>

int main(){

    char *fechas[15] = {"22/11", "26/11", "26/11", "30/11", "30/11", "03/12", "03/12", "09/12", "09/12", "13/12", "13/12", "13/12", "18/12", "18/12", "18/12"};
    char *min[15] = {"10 minutos", " 64 minutos", " 87 minutos", "46 minutos", "67 minutos", "35 minutos", " 57 minutos", "35 minutos", "73 minutos", " 34 minutos", "39 minutos", "69 minutos", "23 minutos", "36 minutos", "108 minutos"};
    char *jug[15] ={"L. Messi", "L. Messi", "E. Fernandez", "A. Mac Allister", "J. Alvarez", "L. Messi", "J. Alvarez", "N. Molina", "L. Messi", "L. Messi", "J. Alvarez", "J. Alvarez", "L. Messi", "A. Di Maria","L. Messi"};
    
    for(int i = 0; i < 15; i++){
     
        printf("%s hizo gol %s a los %s\n", fechas[i], jug[i], min[i]);
    }
    return 0;
}
#include<stdio.h>                         
#include<stdlib.h>                         
int promedio_array( int i, int array[], int n, int total){     
    if(i == total) return n / total;                        
    return promedio_array(i + 1, array, n + array[i], total);          
}                                  
                                          
int main(){   
    int i = 0;
    int n = 0;  
    int total = 5;  
    int array[] = {1, 5, 8, 9, 523};        
    int promedio = promedio_array(i, array, n, total);  
    printf("El promedio da: %d", promedio);   
    return 0;
    }                                        
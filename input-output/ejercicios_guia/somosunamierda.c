

#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp = fopen("ahorcado.txt", "r");
    char array[100];
    int i = 0;
    
    while (i < 100 && fscanf(fp, "%c", &array[i]) != EOF) {
        i++;
    }
    
    array[i] = '\0'; 

    printf("%s\n", array);
    
    for(int j = 0; j < i; j++){
        int n_letras = 1;
        while(array[j] == array[j+1]){
            n_letras++;
            j++;
        }
        if(n_letras == 1){
            printf("%c", array[j]);
        }
        else{
            printf("%c%d", array[j], n_letras);  
        }
    }

    fclose(fp);  
    return 0;
}

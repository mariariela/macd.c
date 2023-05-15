//15/05/2023
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 30
int main () {
    int x[TAM];
    int m, aux;
    srand(time(NULL));
    for(int i=0;i<TAM;i++){
        x[i] = rand() % 10;
        printf("Vetor: %d\n", x[i]);
    }
    for(int i=0;i<TAM;i++){
        for(int k=i+1;k<TAM;k++){
            if(x[k]>x[i]){
                aux = x[k];
                x[k] = x[i];
                x[i] = aux;
            }
        }
    }
    if(TAM%2==0)
        m = (x[TAM/2] + x[TAM/2-1]) /2;
    else
        m = x[TAM/2];
    
    printf("Mediana: %d\n", m);
    return 0;
}
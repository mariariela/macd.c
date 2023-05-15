#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define QTD 30
#define TAM 10
int main () {
    int v[TAM], t=0;
    float media=0;
    srand(time(NULL));
    for(int i=0;i<TAM;i++){
        ;
    }
    for(int i=0;i<TAM;i++){
        t = t + v[i];
    }
    printf("Total: %d\n", t);
    media = ((float)t) / TAM;                       
    printf("Média: %.2f\n", media);
    return 0;
}
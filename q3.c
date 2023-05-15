#include <stdio.h>
#define TAM 10
int main () {
    int v[TAM], t=0;
    float media=0;
    printf("Entre com os valores: ");
    for(int i=0;i<TAM;i++){
        scanf("%d", &v[i]);
    }
    for(int i=0;i<TAM;i++){
        t = t + v[i];
    }
    printf("Total: %d\n", t);
    media = ((float)t) / TAM;                       
    printf("Média: %.2f\n", media);
    return 0;
}
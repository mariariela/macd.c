//05/05/2023
#include <stdio.h>
#define TAM 4
int main () {
    int soma=0, v[4],maior;
    puts("Digite os números: ");
    for(int i=0;i<TAM;i++){
        scanf("%d", &v[i]);
    }
    for(int i=0;i<TAM;i++){
        soma = soma + v[i];
    }
    maior = v[0];
    for(int i=1;i<TAM;i++){
        if(v[i]>maior){
            maior=v[i];}
    }
    printf("Maior: %d\n",maior);
    printf("Somatório: %d\n", soma);
    return 0;
}
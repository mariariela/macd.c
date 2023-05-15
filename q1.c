//05/05/2023
#include <stdio.h>
#define TAM 8
int main () {
    int v[7];
    puts("Entre com os dados:\n");
    for(int k=0;k<7;k++) {
        scanf("%d", &v[k]);
    }
    for(int k=0;k<7;k++){
        printf("%d\n", v[k]);
    }
    return 0;
}
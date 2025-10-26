#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    
    for (i = 0; i < 10; i++) {
    printf("Informe %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posMaior = i;
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
            posMenor = i;
        }
    }

    printf("\nMaior valor: %d (posicao %d)\n", maior, posMaior);
    printf("Menor valor: %d (posicao %d)\n", menor, posMenor);

    return 0;
}

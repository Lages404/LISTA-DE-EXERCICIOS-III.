#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[50];
    int unicos[50];
    int i, c;
    int r;             
    int qtdUnicos = 0; 

    srand(time(NULL));
    for (i = 0; i < 50; i++) {
        array[i] = rand() % 11;
    }

    printf("Valores do vetor: ");
    for (i = 0; i < 50; i++) {
        printf("%d ", array[i]);
    }
    printf("\nValores unicos: ");

    for (i = 0; i < 50; i++) {
        r = 0;
        for (c = 0; c < qtdUnicos; c++) {
            if (array[i] == unicos[c]) {
                r = 1; 
                break;
            }
        }

        if (r == 0) {
            unicos[qtdUnicos] = array[i];
            printf("%d ", unicos[qtdUnicos]);
            qtdUnicos++;
        }
    }

    printf("\n");
    return 0;
}

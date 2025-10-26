#include <stdio.h>

int main()
{
    int numeros[10];
    int i, j;
    int repetido;

    for (i = 0; i < 10; i++)
    {
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros que nao se repetem:\n");

    for (i = 0; i < 10; i++)
    {
        repetido = 0;
        for (j = 0; j < 10; j++)
        {
            if (i != j && numeros[i] == numeros[j])
            {
                repetido = 1;
                break;
            }
        }

        if (repetido == 0)
        {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");
    return 0;
}

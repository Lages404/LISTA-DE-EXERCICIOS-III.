#include <stdio.h>

int main()
{

    int n, i, pa = 0, im = 0;

    printf("Informe a quantidade de numeros que quer informar: ");
    scanf("%d", &n);

    int num[n];
    for (i = 0; i < n; i++)
    {
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Numeros informados\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            pa = pa + num[i];
        }
        else
        {
            im = im + num[i];
        }
    }
    printf("Soma dos numeros pares: %d\n", pa);

    printf("Soma dos numeros impares: %d\n", im);
    return 0;
}
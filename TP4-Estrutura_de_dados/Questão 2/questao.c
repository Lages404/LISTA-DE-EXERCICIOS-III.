#include <stdio.h>

int main()
{
    int n1, n2, i, t;

    printf("Informe um numero: ");
    scanf("%d", &n1);

    printf("Informe outro numero: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    printf("Numeros entre %d e %d:\n", n1, n2);

    for (i = n1 + 1; i < n2; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
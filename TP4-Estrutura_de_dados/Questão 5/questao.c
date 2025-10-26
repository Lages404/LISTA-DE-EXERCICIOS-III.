#include <stdio.h>
#include <string.h>

int main()
{
  char n[1000];
  int i;
  printf("Informe um numero: ");
  scanf("%s", n);

  printf("O numero invertido e: ");
  for (i = strlen(n) - 1; i >= 0; i--)
    {
        printf("%c", n[i]);
    }
}
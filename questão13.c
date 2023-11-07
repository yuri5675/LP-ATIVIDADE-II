#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Crie um programa que solicite do usu√°rio dois n√∫meros inteiros e informe qual destes n√∫meros √© o maior e qual √© o menor.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    int n = 0;
    int gmaior;
    int gmenor;
    int i;

    for (i = 1; i <= 2; i++)
    {
        printf("Digite o %d∫ n˙mero: ", i);
        scanf("%d", &n);
    }
    if (n > gmaior)
    {
        gmaior = n;
    }
    if (n < gmenor)
    {
        gmenor = n;
    }
    printf("\n");
    printf("Maior n˙mero: %d\n", gmaior);
    printf("Menor n˙mero: %d\n", gmenor);

    return 0;
}
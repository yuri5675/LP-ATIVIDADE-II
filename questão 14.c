#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;
    int par = 0;
    int impar = 0;
    int somapar = 0;
    int somaimpar = 0;
    float mediapar = 0;
    float mediaimpar = 0;

    setlocale(LC_ALL, "portuguese");

    do
    {
        printf("Digite um número:");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf(" é par\n");
            par++;  
            somapar += numero;
        }
        else
        {
            printf("é ímpar\n");
            impar++;   
            somaimpar += numero;
        }

    } while (numero >= 0);

    mediapar = somapar/par;
    mediaimpar = somaimpar/impar;

    printf("Os números pares são:%d\n", somapar);
    printf("Os números ímpares são:%d\n", somaimpar);
    printf("A média dos pares é:%f\n", mediapar);
    printf("A média dos ímpares é:%f\n", mediaimpar);
    return 0;
}
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
        printf("Digite um n�mero:");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf(" � par\n");
            par++;  
            somapar += numero;
        }
        else
        {
            printf("� �mpar\n");
            impar++;   
            somaimpar += numero;
        }

    } while (numero >= 0);

    mediapar = somapar/par;
    mediaimpar = somaimpar/impar;

    printf("Os n�meros pares s�o:%d\n", somapar);
    printf("Os n�meros �mpares s�o:%d\n", somaimpar);
    printf("A m�dia dos pares �:%f\n", mediapar);
    printf("A m�dia dos �mpares �:%f\n", mediaimpar);
    return 0;
}
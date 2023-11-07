#include<stdio.h>
#include<stdlib.h>


int main (){


int numero;
int i;
int cont =0;

printf("escolha um numero:");
scanf("%d", &numero);


switch (numero)
{
case 1:
    if (numero<=1)
    {
        printf("nao e primo");
    }
    else
    {
        for ( i = 2; i < numero; i++)
        {
            if (numero%i==0)
            {
                printf("nao e primo");
            }
            
        }
        
    }
    
    break;

default:
printf("numero primo");
    break;
}













}
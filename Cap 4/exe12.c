/*12) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.*/

#include <stdio.h>

int main()
{
    int dia;

    printf("Digite o numero do dia: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("\nSegunda-feira\n");
        break;
    case 2:
        printf("\nTerça-feira\n");
        break;
    case 3:
        printf("\nQuarta-feira\n");
        break;
    case 4:
        printf("\nQuinta-feira\n");
        break;
    case 5:
        printf("\nSexta-feira\n");
        break;
    case 6:
        printf("\nSábado\n");
        break;
    case 7:
        printf("\nDomingo\n");
        break;
    default:
        printf("\nDigite um numero valido\n");
        break;
    }


        return 0;
    }
/*12) Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores
do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);

    int somaDiv = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            somaDiv += i;
        }
    }

    printf("A soma de todos seus divisores é: %d\n", somaDiv);

    return 0;
}
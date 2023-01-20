/*3) Faça um programa que leia um número inteiro N e depois imprima os N primei-
ros números naturais ímpares.*/

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int impar = 0;
    int i = 0;
    while (impar != n)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            impar++;
        }
        i++;
    }
    printf("\n");

    return 0;
}
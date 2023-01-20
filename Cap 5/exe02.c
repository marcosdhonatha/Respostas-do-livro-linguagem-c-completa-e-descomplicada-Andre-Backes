/*1) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.*/

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
        printf("%d ", i);
    printf("\n");

    return 0;
}
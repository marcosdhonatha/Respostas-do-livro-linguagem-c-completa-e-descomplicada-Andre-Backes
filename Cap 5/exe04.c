/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0.*/

#include <stdio.h>

int main()
{
    int n = 3;

    for (int i = 1; i <= 5; i++)
        printf("%d ", i * n);
    printf("\n");

    return 0;
}
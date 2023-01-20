/*18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o
número fornecido é primo ou não.*/

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um inteiro maior que 1: ");
    scanf("%d", &n);

    int div = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            div++;
        }
        if (div > 2)
            break;
    }
    if (div <= 2)
        printf("O numero é primo!\n");
    else
        printf("O número não é primo!\n");

    return 0;
}
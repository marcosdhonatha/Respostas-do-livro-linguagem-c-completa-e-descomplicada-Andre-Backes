/*17) Escreva um programa que leia um número inteiro positivo N e em seguida impri-
ma N linhas do chamado triângulo de Floyd:
1
23
456
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
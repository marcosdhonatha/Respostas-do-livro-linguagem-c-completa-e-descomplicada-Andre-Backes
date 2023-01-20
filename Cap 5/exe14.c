/*14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuá-
rio. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa
no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34.*/

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);

    int somafib = 0;
    int seqFib[num];

    seqFib[0] = 0;
    seqFib[1] = 1;
    seqFib[2] = 1;

    for (int i = 3; i <= num; i++)
    {
        seqFib[i] = seqFib[i - 1] + seqFib[i - 2];
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d ", seqFib[i]);
    }

    return 0;
}
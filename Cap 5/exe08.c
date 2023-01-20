/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main()
{

    int vetor[12];

    printf("Digite 10 numeros inteiros: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int soma = 0;
    for (int i = 0; i < 10; i++)
        soma += vetor[i];
    printf("A media  dos numeros digitados é: %d\n", soma / 10);

    return 0;
}
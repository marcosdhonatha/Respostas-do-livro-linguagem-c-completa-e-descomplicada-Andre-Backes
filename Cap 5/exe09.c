/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
valor lido.*/

#include <stdio.h>

int main()
{

    int vetor[12];

    printf("Digite 10 numeros inteiros: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0], menor = vetor[0];

    for (int i = 1; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("O maior numero é o: %d\nO menor número é o: %d\n", maior, menor);

    return 0;
}
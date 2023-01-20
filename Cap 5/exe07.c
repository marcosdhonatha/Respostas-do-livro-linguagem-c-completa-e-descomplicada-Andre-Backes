/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
valores e apresente o resultado na tela.*/

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
    printf("A soma dos numeros digitados é: %d\n", soma);

    return 0;
}
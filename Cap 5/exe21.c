/*21) Escreva um programa que leia certa quantidade de números, imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a serem
lidos deve ser fornecida pelo usuário.*/

#include <stdio.h>

int main()
{
    int n;
   

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);
     int vetor[n];
    printf("\nAgora digite os numeros: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    int qnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] == maior)
            qnt++;
    }
    printf("O maior numero é o: %d\nEle aparece %d vezes\n", maior, qnt);

    return 0;
}
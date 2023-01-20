/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im-
prima sua média.*/

#include <stdio.h>

int main()
{
    int vetor[11];
    int num;

    for (int i = 0; i < 10;)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            vetor[i] = num;
            i++;
        }
    }
    float soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma += vetor[i];
    }
    printf("A media dos numeros positivos digitados é: %f", soma / 10.0);

    return 0;
}
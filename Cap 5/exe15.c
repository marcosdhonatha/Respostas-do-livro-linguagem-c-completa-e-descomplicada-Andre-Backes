/*15) Elabore um programa que faça a leitura de vários números inteiros até que se digi-
te um número negativo. O programa tem de retornar o maior e o menor número
lido.*/

#include <stdio.h>

int main()
{
    int n;

    printf("Comece a digitar os numeros:\n(Para parar digite um nunero negativo)\n");
    scanf("%d", &n);
    int maior = n, menor = n;

    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
            break;

        if (maior < n)
            maior = n;
        if (menor > n)
            menor = n;
    }

    printf("O maior número digitado foi o: %d\nO menor número digitado foi o: %d\n", maior, menor);

    return 0;
}
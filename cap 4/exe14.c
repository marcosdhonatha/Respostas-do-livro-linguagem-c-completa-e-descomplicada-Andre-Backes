/*14) Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.*/

#include <stdio.h>

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x % 3 == 0 && x % 5 != 0)
        printf("\nO numero é divisivel por 3 mas não é por 5.\n");
    else if (x % 3 != 0 && x % 5 == 0)
        printf("\nO numero é divisivel por 5, mas não é por 3.\n");

    else if (x % 3 == 0 && x % 5 == 0)
        printf("\nO numero é divisivel por 3 e por 5.\n");

    else
        printf("\nO número não é divisivel por 3 nem por 5.\n");

    return 0;
}
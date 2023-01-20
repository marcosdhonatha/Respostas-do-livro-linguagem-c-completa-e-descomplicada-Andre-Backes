/*11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exem-
plo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);
    printf("Os seus divisores são:\n");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
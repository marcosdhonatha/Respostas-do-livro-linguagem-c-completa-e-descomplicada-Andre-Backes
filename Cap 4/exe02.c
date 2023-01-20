/*2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num1;

    printf("Digite dois numeros inteiros\n");
    scanf("%d%d", &num, &num1);
    if (num == num1)
        printf("Numeros iguais\n");

    else if (num > num1)
        printf("O numero maior eh o: %d\n", num);
    else

        printf("O numero maior eh o: %d\n", num1);

    return 0;
}

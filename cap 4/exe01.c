/*1) Faça um programa que leia dois números e mostre qual deles é o maior.*/

#include <stdio.h>

int main()
{
    int num, num1;
    printf("Digite dois numeros inteiros\n");
    scanf("%d%d", &num, &num1);
    if (num > num1)
        printf("O numero maior eh o: %d\n", num);

    else
        printf("O numero maior eh o: %d\n", num1);

    return 0;
}
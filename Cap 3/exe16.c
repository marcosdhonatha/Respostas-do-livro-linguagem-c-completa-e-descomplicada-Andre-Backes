/*16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits).*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int numMul, numDiv;
    numMul = num << 1;
    numDiv = num >> 1;
    printf("Voce digitou :%d \nNumero multiplicado por 2: %d\nNumero dividido por 2: %d", num, numMul, numDiv);

    return 0;
}
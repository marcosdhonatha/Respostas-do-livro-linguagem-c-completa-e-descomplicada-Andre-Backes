/*5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
•• O número digitado ao quadrado.
•• A raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    scanf("%f", &num);
    if (num < 0)
    {
        printf("Tente um numero positivo!\n");
        return 0;
    }

    printf("O numero digitado ao quadrado eh: %f\n", num * num);
    printf("A a raiz quadrada do numero digitado eh: %f\n", sqrt(num));

    return 0;
}
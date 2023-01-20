/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include <stdio.h>

int main()
{ // poderia fazer usando a formula de progressao aritimetica mas achei assim mais interessante
    int soma_par = 0;
    int numPar = 0;
    for (int i = 0; i < 50; i++)
    {
        numPar += 2;
        soma_par += numPar;
    }

    printf("A soma dos 50 primeiros numeros pares é: %d\n", soma_par);

    return 0;
}
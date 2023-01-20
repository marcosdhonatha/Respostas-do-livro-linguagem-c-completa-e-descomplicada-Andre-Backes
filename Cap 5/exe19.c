/*19) Faça um programa que calcule e escreva o valor de S:

S=1/1 + 3/2 + 5/3 + 7/4 +...+99/55;

*/

#include <stdio.h>

int main()
{
    float numerador = 1.0, denominador = 1.0;

    float S = 0;
    /*Observei que o ultimo termo desse somatorio é 99/55 o que não é possível,
    uma vez que o numerador varia sempre duas unidades e o denominador varia uma.
    Considerei como ultimo termo o 99/50.*/
    while (numerador <= 99)
    {
        S += numerador / denominador;
        numerador += 2;
        denominador++;
    }
    printf("O resulatdo da operação é: %f\n", S);

    return 0;
}
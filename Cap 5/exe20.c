/*20) Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor
E, conforme a fórmula a seguir:

E=1/1! + 1/2! +1/3! + ... + 1/n!
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    float E = 0;

    for (int i = 1; i <= n; i++)
    {
        float fatorialI = 1;
        for (int j = 1; j <= i; j++)
        {
            fatorialI *= j;
        }
        E += 1.0 / fatorialI;
    }
    printf("%f\n", E);

    return 0;
}
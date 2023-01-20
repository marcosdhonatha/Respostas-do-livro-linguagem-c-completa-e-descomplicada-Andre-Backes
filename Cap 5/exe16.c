/*16) Em matemática, o número harmônico designado por Hn define-se como o enési-
mo termo da série harmônica. Ou seja:
Hn=1+1/2+1/3+1/4+ ... 1/n
Apresente um programa que calcule o valor de qualquer Hn.*/

#include <stdio.h>

int main()
{
    // Se o tipo das variaveis fosse double, o resulatdo seria ainda mais preciso!
    float Hn = 1;
    float i = 2.0;

    // Vai calcular infinitamente, cada vez se aproximando mais de um resultado preciso
    while (1)
    {
        Hn += 1.0 / i;
        printf("%f\n", Hn);
        i++;
    }

    return 0;
}
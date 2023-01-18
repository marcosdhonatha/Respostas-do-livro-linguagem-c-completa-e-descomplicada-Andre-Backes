/*9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.


                       ---------------------------PESO----------------------------
Altura               | Até 60            Entre 60-90 (inclusive)       Acima de 90
                     |
Menor do que 1,20    |   A                         D                       G
1,20-1,70            |   B                          E                       H
Maior do que 1,70    |   C                          F                       I
*/

#include <stdio.h>

int main()
{
    float altura, peso;

    printf("Informe a altura e o peso da pessoa, nessa ordem: ");
    scanf("%f%f", &altura, &peso);

    char classe;

    if (altura < 1.20)
    {
        if (peso <= 60)
            classe = 'A';
        else if (peso > 60 && peso <= 90)
            classe = 'D';
        else
            classe = 'G';
    }

    else if (altura >= 1.20 && altura <= 1.70)
    {
        if (peso <= 60)
            classe = 'B';
        else if (peso > 60 && peso <= 90)
            classe = 'E';
        else
            classe = 'H';
    }

    else if (altura > 1.70)
    {
        if (peso <= 60)
            classe = 'C';
        else if (peso > 60 && peso <= 90)
            classe = 'F';
        else
            classe = 'I';
    }

    printf("\nA pessoa em questão é classificada em: %c\n", classe);

    return 0;
}
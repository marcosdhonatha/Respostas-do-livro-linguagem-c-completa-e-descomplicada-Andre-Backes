/*15) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
em que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo
grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensa-
gem “Não é equação de segundo grau”. Do contrário, imprima:
•• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
•• Se ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
•• Se ∆ > 0, existem duas raízes reais. Imprima as raízes.*/

#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, c;
    printf("Digite os coeficientes da equação do segundo grau:(a,b,c) ");
    scanf("%f%f%f", &a, &b, &c);

    float delta, raiz, raiz2;
    delta = ((b * b) - 4 * a * c);
    if (a == 0)
        printf("\nNão é uma equação do segundo grau.\n");

    else if (delta < 0)
        printf("Não existe raiz\n");

    else if (delta == 0)
    {
        raiz = ((-b) / (2 * a));

        printf("A raiz é %f\nRaiz única.\n", raiz);
    }
    else if (delta > 0)
    {
        raiz = ((-b + sqrt(delta)) / 2 * a);
        raiz2 = ((-b - sqrt(delta)) / 2 * a);
        printf("As raizes são %f e %f\n", raiz, raiz2);
    }

    return 0;
}
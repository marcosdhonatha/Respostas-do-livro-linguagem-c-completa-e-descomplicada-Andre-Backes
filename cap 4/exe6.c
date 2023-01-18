/*6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
•• Homens: (72,7 * h) – 58ss
•• Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>

int main()
{
    float altura;
    char sexo;
    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

    printf("\nDigite o sexo da pessoa:\"h\" para homem e \"m\" para mulher: ");
    getchar();

    scanf("%c", &sexo);

    float pesoH = (72.7 * altura) - 58;
    float pesoM = (62.1 * altura) - 44.7;
    if (sexo == 'h')
        printf("\n\nO peso ideal desse homen eh: %0.2f\n\n", pesoH);

    else
        printf("\n\nO peso ideal dessa mulher eh: %0.2f\n\n", pesoM);

    return 0;
}
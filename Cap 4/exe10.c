/*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuá-
rio e mostrado na tabela a seguir:


Número digitado            Média
    1                    Geométrica:    raiz3(x*y*z)
    3                    Ponderada:     (x+2*y+3*z)/6
    3                    Harmônica:     3/(1/x+1/y+1/z)
    4                    Aritmética:     (x+y+z)/3
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void geometrica(int x, int y, int z);
void ponderada(int x, int y, int z);
void harmonica(int x, int y, int z);
void aritmetica(int x, int y, int z);

int main()
{
    int x, y, z;

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("\nAgora digite o numero da operação desejada:\n1 - Media geometrica.\n2 - Media ponderada.\n3 - Media harmonica.\n4 - Media Aritmética.\n");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        geometrica(x, y, z);
        break;
    case 2:
        ponderada(x, y, z);
        break;
    case 3:
        harmonica(x, y, z);
        break;
    case 4:
        aritmetica(x, y, z);
        break;
    default:
        break;
    }

    return 0;
}
void geometrica(int x, int y, int z)
{

    float Mgeo;
    Mgeo = pow(x * y * z, 1.0 / 3.0);

    printf("\nA media geometrica eh: %f\n", Mgeo);
}

void ponderada(int x, int y, int z)
{
    float Mpon = (x + 2 * y + 3 * z) / 6;

    printf("\nA media ponderada eh: %f\n", Mpon);
}
void harmonica(int x, int y, int z)
{
    float Mhar = 3.0 / (1.0 / x + 1.0 / y + 1.0 / z);

    printf("\nA media harmonica eh: %f\n", Mhar);
}
void aritmetica(int x, int y, int z)
{
    float Marit = (x + y + z) / 3;

    printf("\nA media aritmética eh: %f\n", Marit);
}

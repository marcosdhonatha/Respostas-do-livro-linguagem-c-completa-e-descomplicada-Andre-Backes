/*13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h= sqrt(a²+b²)
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado*/

#include <stdio.h>
#include <math.h>
int main (){
int cateto1, cateto2, hipotenusa;

printf("Digite os valores dos catetos do triangulo:\n");
scanf("%d%d", &cateto1, &cateto2);

hipotenusa=sqrt((cateto1*cateto1) + (cateto2*cateto2));

printf("O valor da hipotenusa eh: %d\n", hipotenusa);
    return 0;
}
/*12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = π * raio2 * altura,
em que π = 3.141592*/

#include <stdio.h>
float const pi=3.141592;

int main(){
int altura, raio;
float volume=0;
printf("Digite a altura e o raio, respectivamente:\n");
scanf("%d%d", &altura, &raio);

volume=pi*raio*raio*altura;
printf("O volume do cilindro em questão eh: %f", volume);


    return 0;
}
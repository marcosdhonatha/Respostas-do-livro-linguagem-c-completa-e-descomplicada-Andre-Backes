/*11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
 A área do círculo é A = π * raio^2, sendo π = 3.141592.*/

#include <stdio.h>
float const pi=3.141592;
int main (){
float raio;
float area;

printf("Digite o tamanho do raio do circulo: ");
scanf("%f", &raio);

area=pi*(raio*raio);

printf("A area do circulo eh: %.2f\n", area);

    return 0;
}
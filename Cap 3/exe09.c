/*9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de 
conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.*/

#include <stdio.h>
#define pi 3.141592
int main (){
float graus, radianos;

printf("Digite um valor em graus: ");
scanf("%f",&graus);

radianos=graus*(pi/180.0);

printf("%.2f graus eh equivalente a %.2f radianos\n",graus,radianos);

    return 0;
}
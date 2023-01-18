/*6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em 
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s*/

#include <stdio.h>

int main (){
int velocidade;

printf("Digite uma velocidade em km/h: ");
scanf("%d",&velocidade);
printf("%d Km/h eh equivalente a %.2f M/s\n",velocidade,velocidade/3.6);


    return 0;
}
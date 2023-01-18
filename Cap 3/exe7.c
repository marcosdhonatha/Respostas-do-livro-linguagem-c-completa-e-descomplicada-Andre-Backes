/*7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, 
imprima o valor correspondente em dólares.*/

#include <stdio.h>

int main (){
float real,dolar;

printf("Digite um valor em reais: ");
scanf("%f",&real);
dolar=real/5.45;
printf("%.2f reais eh equivalente a %.2f dolares\n",real,dolar);


    return 0;
}
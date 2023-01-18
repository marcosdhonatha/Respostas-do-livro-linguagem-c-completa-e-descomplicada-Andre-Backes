/*2) Faça um programa que leia um número real e imprima a quinta parte desse número*/

#include <stdio.h>

int main(){
float x;

printf("Digite um numero real: ");
scanf("%f",&x);
printf("A quinta parte de %.2f eh: %.2f\n", x,x/5);


    return 0;
}
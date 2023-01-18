/*5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua 
idade e do ano atual.*/

#include <stdio.h>

int main (){
int ano,idade;

printf("Digite sua idade: ");
scanf("%d",&idade);
printf("Digite o ano atual: ");
scanf("%d",&ano);
printf("Voce nasceu em: %d\n",ano-idade);


    return 0;
} 
/*3) Escreva um programa que leia um número inteiro e depois imprima a mensagem 
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().*/

#include <stdio.h>

int main(){
int x;

printf("Digite um numero...");
scanf("%d", &x);
printf("Valor lido: %d\n",x);


    return 0;
}
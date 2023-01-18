/*17) Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.*/

#include <stdio.h>

int main (){

int num, numCom;
scanf("%d",&num);

numCom=~num;

printf("O complemento de %d eh %d\n", num, numCom);





    return 0;
}
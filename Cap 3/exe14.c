/*14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.*/

#include <stdio.h>
#include <stdlib.h>


int main (){
char letra, letraM;

printf("Digite uma letra maiuscula para ser convertida em minuscula\n");

scanf("%c", &letra);
if (letra<65||letra>90)
{
    printf("Tente uma letra MAIUSCULA!!!");
    exit(1);
}

letraM= 32+letra;
printf("Voce digitou %c, convertemos para %c", letra, letraM);


    return 0;
}
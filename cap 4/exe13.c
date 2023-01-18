/*13) Faça um programa que mostre ao usuário um menu com quatro opções de ope-
rações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.*/

#include <stdio.h>

int main(){

printf("Bem vindo à calculadora básica!\n\n");
printf("Operações disponíveis:\n1.Adição\n2.Subtração\n3.Divisão\n4.Multipilicação\n");

int operacao;
printf("\nDigite o numero da operação desejada: ");
scanf("%d", &operacao);
float num1,num2, resultado;

printf("Digite os numeros para que seja realixzada a operação escolhida: ");
scanf("%f%f", &num1,&num2);
switch (operacao)
{
case 1:
resultado=num1+num2;
    printf("%f+%f = %f",num1,num2,resultado);
    break;
    case 2:
    resultado=num1-num2;
    printf("%f-%f = %f",num1,num2,resultado);
    break;

    case 3:
    resultado=num1/num2;
    printf("%f/%f = %f",num1,num2,resultado);
    break;

    case 4:
    resultado=num1*num2;
    printf("%f*%f = %f",num1,num2,resultado);
    break;

default:
printf("Voce digitou uma opção de operação invalida\n");
    break;
}

    return 0;
}
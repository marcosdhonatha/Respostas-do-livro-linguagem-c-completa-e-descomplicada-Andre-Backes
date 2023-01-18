/*19) Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.*/

#include <stdio.h>


int main(){
int num1,num2;

scanf("%d%d", &num1,&num2);

printf("\n\nVoce digitou %d e %d\n", num1,num2);

printf("Operaçao de OU EXCLUSIVO entre eles: %d\n", num1 ^num2);
printf("Operaçao de OU BIT A BIT entre eles: %d\n", num1 | num2);
printf("Operaçao de E BIT A BIT entre eles: %d\n", num1 & num2);



    return 0;
}
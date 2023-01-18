/*15) Faça um programa para ler um número inteiro positivo de três dígitos. Em segui-
da, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321*/

#include <stdio.h>

int main()
{
   int num, num1, num2, num3;
   printf("Digite um numero inteiro de 3 digitos positivo: ");
   scanf("%d", &num);

   num3 = num % 10;
   num2 = (num % 100) / 10;
   num1 = (num / 100);

   printf("%d %d% d\n", num3, num2, num1);
   return 0;
}
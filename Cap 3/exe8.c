/*8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a 
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main (){
float fah,cel;

printf("Digite uma temperatura em celsius: ");
scanf("%f",&cel);
fah=cel*(9.0/5.0)+32;
printf("%.2f graus Celsius eh equivalente a %.2f graus em Fahrenheit\n",cel,fah);


    return 0;
}
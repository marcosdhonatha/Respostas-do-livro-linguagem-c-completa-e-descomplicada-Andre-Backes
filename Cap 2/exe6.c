/*6) Faça um programa que leia um valor do tipo double e depois o imprima na forma 
de notação científica. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
double x;
scanf("%f",&x);
printf("Valor em notacao cientifica: %E\n",x);

    return 0;
}
/*18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo.*/

#include <stdio.h>



int main(){


int num, desloca;
scanf("%d%d", &num,&desloca);

int numDIR, numESQ;

numDIR=num>>desloca;
numESQ=num<<desloca;

printf("Numero original: %d\nDeslocamento a direita: %d\nDeslocamento a esquerda: %d\n", num,numDIR,numESQ);


    return 0;
}
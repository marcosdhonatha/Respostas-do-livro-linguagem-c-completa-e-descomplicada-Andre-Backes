#include <stdio.h>

int main(){
char c;
int i;
float f;

printf("Digite um char um float e um inteiro, nessa ordem...");
scanf("%c%f%i", &c,&f,&i);
printf("Imprimindo de formas diferentes\n%c\t%.2f\t%d\n%c %.2f %d\n\n%c\n%.2f\n%d\n",c,f,i,c,f,i,c,f,i);

    return 0;
}
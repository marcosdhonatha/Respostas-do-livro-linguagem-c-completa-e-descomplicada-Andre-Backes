/*13) Faça um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.*/


#include <stdio.h>


int main(){
    char c;
printf("Digite um caractere do tipo char: ");
c=getchar();
printf("\n\"%c\"\n", c);


}
/*4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/

#include <stdio.h>

int main(){
float x,y,z,w;

printf("Digite quatro numeros reais: ");
scanf("%f%f%f%f",&x,&y,&z,&w);
printf("A media desses valores eh: %.2f\n",(x+y+z+w)/4);


    return 0;
}
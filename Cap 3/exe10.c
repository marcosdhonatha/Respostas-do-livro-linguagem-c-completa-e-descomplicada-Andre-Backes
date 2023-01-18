/*10) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include <stdio.h>

 float const premio=780000.00;
int main (){
float ganhador1,ganhador2, ganhador3;

ganhador1=(46.0/100.0)*premio;
ganhador2=(32.0/100.0)*premio;
ganhador3=premio-ganhador1-ganhador2;

printf("O jogador 1 ganhara: %.2f reais\nO jogador 2 ganhara %.2f reais\nO ganhador 3 ganhara %.2f reais\n", ganhador1,ganhador2,ganhador3);


    return 0;
}
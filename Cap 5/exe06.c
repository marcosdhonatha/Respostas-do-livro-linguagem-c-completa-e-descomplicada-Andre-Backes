/*6) Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

#include <stdio.h>

int main()
{

    printf("Iniciando a contagem regressiva na velocidade da luz!\n");
    int i = 10;
    while (i > 0)
    {
        printf("%d\n", i);
        i--;
    }
    printf("FIM!\n");

    return 0;
}
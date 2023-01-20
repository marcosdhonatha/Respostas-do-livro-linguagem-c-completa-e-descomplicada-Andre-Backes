/*7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada es-
tado possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o pro-
grama retorne o preço final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
de erro.

    Estado:   MG  SP   RJ   MS
    Imposto:  7%  12%  15%  8%*/

#include <stdio.h>
#include <string.h>

int main()
{
    float preco;
    printf("Informe o preço do produto: ");
    scanf("%f", &preco);

    char estado[4];
    printf("\nInforme o estado: (\"MG\"; \"SP\";\"RJ\";\"MS\"): ");
    scanf("%s", estado);

    float taxa;
    if (strcmp(estado, "MG") == 0)
        taxa = preco * 7 / 100;
    else if (strcmp(estado, "SP") == 0)
        taxa = preco * 12 / 100;
    else if (strcmp(estado, "RJ") == 0)
        taxa = preco * 15 / 100;
    else if (strcmp(estado, "MS") == 0)
        taxa = preco * 8 / 100.0;
    else
    {
        printf("Informe um estado valido!!!\n");
        return 0;
    }

    printf("\nO preco final do produto com o acrescimo das taxas eh: %0.2f\n", preco + taxa);

    return 0;
}
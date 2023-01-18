/*8) Escreva um programa que, dada a idade de um nadador, o classifique em uma das
seguintes categorias:

Infantil A       5-7
Infantil B       8-10
Juvenil A        11-13
Juvenil B         14-17
Sênior      maiores de 18 anos
*/

#include <stdio.h>
#include <string.h> 

int main()
{
    int idade;
    printf("\nDigite a idade do nadador: ");
    scanf("%d", &idade);

    char catg[15];
    if (idade >= 5 && idade <= 7)
        strcpy(catg, "Infantil A");

    else if (idade >= 8 && idade <= 10)
        strcpy(catg, "Infantil B");

    else if (idade >= 11 && idade <= 13)
        strcpy(catg, "Juvenil A");

    else if (idade >= 14 && idade <= 17)
        strcpy(catg, "Juvenil B");

    else if (idade >= 18)
        strcpy(catg, "Senior");

    else
    {
        printf("Ocorreu um erro com a idade informada, tente outra vez.\n");
        return 0;
    }

    printf("\nO nadador pertence à categoria: %s\n", catg);

    return 0;
}
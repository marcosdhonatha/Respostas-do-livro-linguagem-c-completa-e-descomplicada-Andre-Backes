/*4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>

int main()
{

    printf("Digite o salario e o valor da prestação do empréstimo\n");

    float salario, prestacao, porcento20;
    scanf("%f%f", &salario, &prestacao);
    porcento20 = 20 * salario / 100;

    if (prestacao > porcento20)
        printf("emprestimo nao concedido.\n");
    else
        printf("Emprestimo concedido!\n");

    return 0;
}
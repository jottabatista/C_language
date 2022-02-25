#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int  main ()
{

    int primeiro, segundo, soma, subtracao, multiplicacao;
    float divisao;
    printf("Digite o primeiro numero: \n\n");
    scanf("%d", &primeiro);

    printf("Digite o segundo numero: \n\n");
    scanf("%d", &segundo);

    printf("Total dos calculos sao:");

    soma= primeiro + segundo;
    subtracao= primeiro - segundo;
    multiplicacao= primeiro * segundo;
    divisao= primeiro / segundo;

    printf("soma=%d\n", soma);
    printf("subtracao=%d\n", subtracao);
    printf("multiplicacao=%d\n", multiplicacao);
    printf("divisao=%.2f\n", divisao);
}

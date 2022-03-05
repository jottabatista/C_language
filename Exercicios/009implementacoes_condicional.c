#include<stdio.h>

    int main(){

    int numero, resultado_multiplicacao;
    printf("informe o numero: ");
    scanf("%d", &numero);

    if(numero>50){
        resultado_multiplicacao=numero*2;
        printf("O resultado da multiplicacao:%d", resultado_multiplicacao);
    }
    else(numero<=50);
        resultado_multiplicacao=numero*3;
        printf("O resultado da multiplicacao eh menor que:%d", resultado_multiplicacao);

    return 0;
}

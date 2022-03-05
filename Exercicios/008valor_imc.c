#include<stdio.h>
#include<stdlib.h>
int main(){

    float peso=0;
        printf("Digite seu peso: \n");
        scanf("%f", &peso);

    float altura=0;
        printf("Digite sua altura: \n");
        scanf("%f", &altura);

    float imc = peso/(altura*altura);
        printf("Seu imc é: %.2f", imc);

        if(imc>30){
            printf("Seu imc esta alto, voce esta obeso ");
        }
        else if(imc<=30){
            printf("Seu IMC esta menor, voce esta saudavel ");
        }


return 0;
}

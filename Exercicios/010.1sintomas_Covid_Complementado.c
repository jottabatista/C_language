#include<stdio.h>

int main(){

    int todosOsSintomas, sintomasCovid=0,dorNoCorpo=0, dorDeCabeca=0,febreAlta=0;

        printf("Esta com sintomas, digite 1 para SIM, 0 para NAO\n");

        printf("Esta com dor no corpo:");
        scanf("%d", &dorNoCorpo);
        if (dorNoCorpo == 1){
            todosOsSintomas++;
        }

        printf("Sente dor de Cabeca:");
        scanf("%d", &dorDeCabeca);
        if(dorDeCabeca == 1){
                todosOsSintomas++;
        }

        printf("Esta com febre alta tambem:");
        scanf("%d", &febreAlta);

        if(febreAlta == 1){
            todosOsSintomas++;
        }
        if(todosOsSintomas==3){
            printf("SEU TESTE DEU POSITIVO\n");
        }

        else if(todosOsSintomas==0){
            printf("SEU TESTE DEU NEGATIVO\n\n");
        }

        else if(todosOsSintomas==2){
            printf("TALVEZ TENHA COVID\n");
        }
        else (todosOsSintomas==1);
            printf("FIQUE EM CASA POR MAIS 5 DIAS\n");


return 0;
}


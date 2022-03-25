#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	char produto01[40];
	
	printf("Digite seu sintoma:\n");
	
	gets(produto01);
	
	if(strcmp(produto01,"febre","dorNoCorpo","coriza")==0){
		printf("Ha possibilidades");
	}
	else(strcmp(produto01,"nada")==0) 
		printf("Sera necessario fazer um teste");

	


return 0;
}

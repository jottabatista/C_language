#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	int numero_pessoas=0;
	int idade=0;
	float altura=0;
	float peso=0;
	int i;
	int numero_40anos=0;
	float num_altura=0;
	float somatorio_altura=0;
	float media_altura=0.0;
	float num_ate50kg=0.0;
	float percent50kg=0.0;
	printf("\n Total de pessoas: ");
	scanf("%d", &numero_pessoas);
	
	for(i=0;i<numero_pessoas;i++){
	
		printf("\n[%d]Digite idade:",i+1);
		scanf("%d", &idade);
		printf("[%d]Digite Altura: ",i+1);
		scanf("%f", &altura);
		printf("[%d]Digite peso: ",i+1);
		scanf("%f", &peso);
		
			if(idade>40){
				numero_40anos++;
			}
			if((idade>=20)&&(idade<=30)){
				somatorio_altura=somatorio_altura+altura;
				num_altura++;				
			}
			if(peso<50){
				num_ate50kg++;
			}
		}
			percent50kg=(num_ate50kg/numero_pessoas)*100;
			media_altura=(somatorio_altura)/num_altura;
	
			printf("\nPessoas com idade maior que 40 anos: %d", numero_40anos);
			printf("\nMedia das alturas: %2.f", media_altura);
			printf("\nPessoas ate 50kg: %.2f%%\n", percent50kg);
	
return 0;
	}

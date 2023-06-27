#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//***jogo pedra-papel-tesoura
//regras
//Papel ganha da pedra
//Pedra ganha da tesoura
//Tesoura ganha do papel

int main(){
	int computador, jogador;
	printf("\n ###Bem-vindos ao jogo Pedra-papel-tesoura###\n");
	printf("\nvoce jogara contra o computador\n");
	printf("\nEscolha sua jogada:\n");
	printf("\n1 - pedra\n");
	printf("\n2 - Papel\n");
	printf("\n3 - Tesoura\n");
	scanf("%d",&jogador);
	
	srand(time(NULL));
	computador= 1+ (rand() % 3);
	
	
	printf("Jogada do computador: %d\n", computador);
	
	if(jogador<1 || jogador>3){
		printf("Jogada Invalida!!\n");
		
	} 
	else{
		if(jogador == computador){
			printf("Empatados!!\n");
		}		
	
	else{
		
		if(jogador==1 && computador==2){
			printf("computador vence** :(");	
		}
	
		if(jogador==2 && computador==3){
			printf("computador vence** :(");	
		}
	
		if(jogador==3 && computador==1){
			printf("Computador vence** :(");
		}
		
		if(computador==1 && jogador==2){
			printf("Você venceu :)");
		}
		
		if(computador==2 && jogador==3){
	   		printf("VocÊ venceu :)");
	   }
		
		if(computador==3 && jogador==1){
	  		printf("Você venceu :)");
	  }	
		
		}
}
	printf("\nFIM!!\n");
	return 0;
	
	
	
	
}

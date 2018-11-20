/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 8 - A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. 
Escreva um algoritmo para ler o número de gols marcados pelo Inter, o número de gols marcados pelo GRÊMIO em
um GRENAL, imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo após
escrever a mensagem "Novo GRENAL 1.Sim 2.Não?" e solicitar uma resposta. Se a
resposta for 1, o algoritmo deve ser executado novamente solicitando o número de
gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado
imprimindo:
o Quantos GRENAIS fizeram parte da estatística.
o O número de vitórias do Inter.
o O número de vitórias do Grêmio.
o O número de Empates.
o Uma mensagem indicando qual o time que venceu o maior número de GRENAIS
(ou NÃO HOUVE VENCEDOR).*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	int gremio, inter, partidas, vitgremio, vitinter, empate, resp;
	
	do{
		printf("Digite o número de gols marcados pelo Grêmio na partida: \n");
		scanf("%i", &gremio);
		printf("Digite o número de gols marcados pelo Inter na partida: \n");
		scanf("%i", &inter);
		partidas ++;
		
		if(gremio > inter){
			printf("O Grêmio ganhou a partida! \n");
			vitgremio ++;
		}
		
		if(inter > gremio){
			printf("O Inter ganhou a partidada! \n");
			vitinter ++;
		}
		
		if(gremio == inter){
			printf("Houve empate na partidade! \n");
			empate ++;
		}
		
		printf("Você deseja cadastrar um novo GRENAL? \n 1- SIM\n 2- NÃO\n");
		scanf("%i", &resp);
		
		while(resp != 1 && resp != 2){
			printf("Insira uma opção válida!\n");
			printf("Você deseja cadastrar um novo GRENAL? \n 1- SIM\n 2- NÃO\n");
			scanf("%i", &resp);
		}
		
	}while(resp != 2);
	
		printf("Total de partidas cadastradas: %i \n Total de vitórias do Grêmio: %i \n Total de vitórias do Inter: %i \n Total de empates: %i \n", partidas, vitgremio, vitinter, empate);
		
		if(vitgremio > vitinter){
			printf("O Grêmio venceu o maior número de partidas! \n");
		}
		
		if(vitinter > vitgremio){
			printf("O Inter venceu o maior número de partidas! \n");
		}
		
		if(vitinter == vitgremio){
			printf("Não houve vencedor.\n");
		}
	system("pause");
	return 0;
}

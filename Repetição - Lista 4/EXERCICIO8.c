/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 8 - A Federa��o Ga�cha de Futebol contratou voc� para escrever um programa para fazer uma estat�stica do resultado de v�rios GRENAIS. 
Escreva um algoritmo para ler o n�mero de gols marcados pelo Inter, o n�mero de gols marcados pelo GR�MIO em
um GRENAL, imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo ap�s
escrever a mensagem "Novo GRENAL 1.Sim 2.N�o?" e solicitar uma resposta. Se a
resposta for 1, o algoritmo deve ser executado novamente solicitando o n�mero de
gols marcados pelos times em uma nova partida, caso contr�rio deve ser encerrado
imprimindo:
o Quantos GRENAIS fizeram parte da estat�stica.
o O n�mero de vit�rias do Inter.
o O n�mero de vit�rias do Gr�mio.
o O n�mero de Empates.
o Uma mensagem indicando qual o time que venceu o maior n�mero de GRENAIS
(ou N�O HOUVE VENCEDOR).*/

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
		printf("Digite o n�mero de gols marcados pelo Gr�mio na partida: \n");
		scanf("%i", &gremio);
		printf("Digite o n�mero de gols marcados pelo Inter na partida: \n");
		scanf("%i", &inter);
		partidas ++;
		
		if(gremio > inter){
			printf("O Gr�mio ganhou a partida! \n");
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
		
		printf("Voc� deseja cadastrar um novo GRENAL? \n 1- SIM\n 2- N�O\n");
		scanf("%i", &resp);
		
		while(resp != 1 && resp != 2){
			printf("Insira uma op��o v�lida!\n");
			printf("Voc� deseja cadastrar um novo GRENAL? \n 1- SIM\n 2- N�O\n");
			scanf("%i", &resp);
		}
		
	}while(resp != 2);
	
		printf("Total de partidas cadastradas: %i \n Total de vit�rias do Gr�mio: %i \n Total de vit�rias do Inter: %i \n Total de empates: %i \n", partidas, vitgremio, vitinter, empate);
		
		if(vitgremio > vitinter){
			printf("O Gr�mio venceu o maior n�mero de partidas! \n");
		}
		
		if(vitinter > vitgremio){
			printf("O Inter venceu o maior n�mero de partidas! \n");
		}
		
		if(vitinter == vitgremio){
			printf("N�o houve vencedor.\n");
		}
	system("pause");
	return 0;
}

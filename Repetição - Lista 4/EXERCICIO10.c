/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 10 - Uma elei��o possui 2 candidatos a prefeito: o candidato Jos�, do Partido da Felicidade
e o candidato Jo�o, do Partido da Esperan�a. Os eleitores votam nos candidatos pelo
n�mero do partido. Para votar no candidato Jos� do Partido da Felicidade, precisam
digitar o n�mero 1. Para votar no candidato Jo�o, do Partido da Esperan�a, precisam
digitar o n�mero 2. Para votar em Branco precisam digitar o n�mero 3 e para votar
Nulo precisam digitar o n�mero 4.
Fa�a um algoritmo que simule uma urna eletr�nica. Para cada eleitor, deve ser lido o
n�mero do seu t�tulo e em seguida o eleitor poder� digitar o seu voto. A elei��o �
encerrada quando um valor negativo (menor do que 0) para o t�tulo do eleitor � digitado.
Informe quantos votos cada candidato teve, quantos brancos e quantos nulos e qual
candidato ganhou a elei��o.*/

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
	//configurando locale
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	int part1, part2, branco, nulo, eleitor, voto;
	
	do{
		printf("Informe o seu titulo de eleitor: \n");
		scanf("%i", &eleitor);
		printf("Digite o seu voto de acordo com as op��es abaixo: \n");
		printf("1 - Para votar no candidato Jos� do Partido da Felicidade \n 2 - Para votar no candidato Jo�o do Partido da Esperan�a \n 3 - Branco \n 4 - Nulo \n");
		scanf("%i", &voto);
		
		while(voto != 1 && voto != 2 && voto != 3 && voto != 4){
			printf("Voto inv�lido! \n");
			printf("Digite o seu voto de acordo com as op��es abaixo: \n");
			printf("1 - Para votar no candidato Jos� do Partido da Felicidade \n 2 - Para votar no candidato Jo�o do Partido da Esperan�a \n 3 - Branco \n 4 - Nulo \n");
			scanf("%i", &voto);
		}
		
		switch(voto){
			case 1:
				part1 ++;
			break;
			case 2:
				part2 ++;
			break;
			case 3:
				branco ++;
			break;
			case 4:
				nulo ++;
			break;
		}
	}while(eleitor > 0);
	
	if(part1 != 0 || part2 != 0 || branco != 0 || nulo != 0){
		printf("A elei��o foi encerrada! \n Confira abaixo o resultado: \n");
		printf("Jos� do Partido da Felicidade: %i votos \n Jo�o do Partido da Esperan�a: %i votos \n Brancos: %i votos \n Nulos: %i votos \n", part1, part2, branco, nulo);
		
		if(part1 > part2){
			printf("Jos� do Partido da Felicidade foi eleito!");
		}
		
		if(part2 > part1){
			printf("Jo�o do Partido da Esperan�a foi eleito!");
		}
		
		if(part1 == part2){
			printf("Houve um empate entre os dois candidatos!");
		}
	}
	
	system("pause");
	return 0;
}

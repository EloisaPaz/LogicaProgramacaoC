/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 10 - Uma eleição possui 2 candidatos a prefeito: o candidato José, do Partido da Felicidade
e o candidato João, do Partido da Esperança. Os eleitores votam nos candidatos pelo
número do partido. Para votar no candidato José do Partido da Felicidade, precisam
digitar o número 1. Para votar no candidato João, do Partido da Esperança, precisam
digitar o número 2. Para votar em Branco precisam digitar o número 3 e para votar
Nulo precisam digitar o número 4.
Faça um algoritmo que simule uma urna eletrônica. Para cada eleitor, deve ser lido o
número do seu título e em seguida o eleitor poderá digitar o seu voto. A eleição é
encerrada quando um valor negativo (menor do que 0) para o título do eleitor é digitado.
Informe quantos votos cada candidato teve, quantos brancos e quantos nulos e qual
candidato ganhou a eleição.*/

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
		printf("Digite o seu voto de acordo com as opções abaixo: \n");
		printf("1 - Para votar no candidato José do Partido da Felicidade \n 2 - Para votar no candidato João do Partido da Esperança \n 3 - Branco \n 4 - Nulo \n");
		scanf("%i", &voto);
		
		while(voto != 1 && voto != 2 && voto != 3 && voto != 4){
			printf("Voto inválido! \n");
			printf("Digite o seu voto de acordo com as opções abaixo: \n");
			printf("1 - Para votar no candidato José do Partido da Felicidade \n 2 - Para votar no candidato João do Partido da Esperança \n 3 - Branco \n 4 - Nulo \n");
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
		printf("A eleição foi encerrada! \n Confira abaixo o resultado: \n");
		printf("José do Partido da Felicidade: %i votos \n João do Partido da Esperança: %i votos \n Brancos: %i votos \n Nulos: %i votos \n", part1, part2, branco, nulo);
		
		if(part1 > part2){
			printf("José do Partido da Felicidade foi eleito!");
		}
		
		if(part2 > part1){
			printf("João do Partido da Esperança foi eleito!");
		}
		
		if(part1 == part2){
			printf("Houve um empate entre os dois candidatos!");
		}
	}
	
	system("pause");
	return 0;
}

/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 15 - Faça um programa que permita a escolha dasfrutas especificadas abaixo, sendo elas identificadas por seu valor correspondente: 
1 - Abacaxi 
2 - Maçã
3 - Pêra
4 - Fim
Usando a instrução Do ... While identifique quais as frutas desejadas por seu usuário, lembrando que ele pode desejar somente 
um tipo de fruta de cada vez. Porém deve existir o cuidado na identificação correta das frutas, pois o feirante só possui 
esses três tipos. Sendo assim, o usuário que escolher uma fruta não existente deve ser notificado que a fruta não está 
disponivel e a solicitação deve ser feita novamente. Mostre no final o total de cada fruta adquirida, não podendo ser informada
a quantidade pelo usuário. */ 

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
	int frutas, abacaxi = 0, pera = 0, maca = 0;
	
	do{
		printf("Escolha uma fruta de acordo com o número correspondente: \n1 - ABACAXI \n2 - MAÇÃ \n3 - PERA \n9 - FIM\n");
		scanf("%i", &frutas);
		fflush(stdin);
		switch(frutas){
			case 1: 
			abacaxi ++;
			break;
			case 2:
			maca ++;
			break;
			case 3:
			pera ++;
			break;
			default: printf("Digite um número válido para frutas, caso queira encerrar o programa digite 9!\n");	
		}
	}while(frutas != 9);
	
	printf("Seu pedido foi de %i abacaxis, %i maçãs, %i peras", abacaxi, maca, pera);
	
}

/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 15 - Fa�a um programa que permita a escolha dasfrutas especificadas abaixo, sendo elas identificadas por seu valor correspondente: 
1 - Abacaxi 
2 - Ma��
3 - P�ra
4 - Fim
Usando a instru��o Do ... While identifique quais as frutas desejadas por seu usu�rio, lembrando que ele pode desejar somente 
um tipo de fruta de cada vez. Por�m deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� possui 
esses tr�s tipos. Sendo assim, o usu�rio que escolher uma fruta n�o existente deve ser notificado que a fruta n�o est� 
disponivel e a solicita��o deve ser feita novamente. Mostre no final o total de cada fruta adquirida, n�o podendo ser informada
a quantidade pelo usu�rio. */ 

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
		printf("Escolha uma fruta de acordo com o n�mero correspondente: \n1 - ABACAXI \n2 - MA�� \n3 - PERA \n9 - FIM\n");
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
			default: printf("Digite um n�mero v�lido para frutas, caso queira encerrar o programa digite 9!\n");	
		}
	}while(frutas != 9);
	
	printf("Seu pedido foi de %i abacaxis, %i ma��s, %i peras", abacaxi, maca, pera);
	
}

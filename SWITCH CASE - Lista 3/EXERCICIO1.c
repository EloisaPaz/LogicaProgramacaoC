/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 1- Elabore um programa que solicite ao usu�rio que digite o dia da semana em n�meros e exiba por extenso. 
Caso ele digite um n�mero inv�lido exibir mensagem na tela. */

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
	//variaveis
	int dia;
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o dia da semana (1 = domingo, 2 = segunda...): ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("� domingo");
		break;
		case 2:
			printf("� segunda");
		break;
		case 3:
			printf("� ter�a");
		break;
		case 4:
			printf("� quarta");
		break;
		case 5:
			printf("� quinta");
		break;
		case 6:
			printf("� sexta");
		break;
		case 7:
			printf("� s�bado");
		break;
	}
	
	//pausando
	system("pause");
	return 0;	
}

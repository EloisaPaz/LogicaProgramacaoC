/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 6 - Escreva um algoritmo para calcular o valor de y como função de x, segundo a função y(x) = 3x + 2, num domínio real.*/  

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
	int valorx, valory;

	//configurando include locale
	setlocale(LC_ALL, "Portuguese");	
	//perguntando valor
	printf("\n Digite o valor de x: ");
	//lendo o valor
	scanf("%i", &valorx);
	//mm
	valory = 3*valorx + 2;
	//mostra resultado
	printf("\n O valor de Y é %i",valory );
	
	//pausando
	system("pause");
	return 0;
}


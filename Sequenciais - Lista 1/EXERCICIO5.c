/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

// 5 - Leia uma quantidade de chuva dada em polegadas e imprima o equivalente em mil�metros (25,4 mm = 1 polegada).

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
	float chuva, mm;

	//configurando include locale
	setlocale(LC_ALL, "Portuguese");	
	//perguntando valor
	printf("\n Quantidade de chuva em polegadas: ");
	//lendo o valor
	scanf("%f", &chuva);
	//mm
	mm = chuva * 25.4;
	//mostra resultado
	printf("\n A quantidade em milimetros �: %2.2f", mm);
	
	//pausando
	system("pause");
	return 0;
}

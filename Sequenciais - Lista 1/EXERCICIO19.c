/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 19 - Sabe-se que:
� 1 p� = 12 polegadas
� 1 jarda = 3 p�s
� 1 milha = 1.760 jardas */ 


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
	
	setlocale(LC_ALL, "Portuguese");
	int pe, polegadas = 12, jardas = 3, resultado_pol, resultado_jar;
	float milhas = 1.760, resultado_mil; 
	
	printf("Informe a medida em P�s para convers�o: \n");
	scanf("%i",&pe);
	
	resultado_pol = pe *polegadas;
	resultado_jar = pe *jardas;
	resultado_mil = pe *milhas;
	
	printf("\n %i p�s s�o %i polegadas. \n", pe,resultado_pol);
	printf("\n %i p�s s�o %i jardas. \n", pe, resultado_jar);
	printf("\n %i p�s s�o %2.2f milhas. \n", pe,resultado_mil);
	
	system("pause");
	return 0;
	
}

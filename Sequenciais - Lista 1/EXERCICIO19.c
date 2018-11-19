/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 19 - Sabe-se que:
• 1 pé = 12 polegadas
• 1 jarda = 3 pés
• 1 milha = 1.760 jardas */ 


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
	
	printf("Informe a medida em Pés para conversão: \n");
	scanf("%i",&pe);
	
	resultado_pol = pe *polegadas;
	resultado_jar = pe *jardas;
	resultado_mil = pe *milhas;
	
	printf("\n %i pés são %i polegadas. \n", pe,resultado_pol);
	printf("\n %i pés são %i jardas. \n", pe, resultado_jar);
	printf("\n %i pés são %2.2f milhas. \n", pe,resultado_mil);
	
	system("pause");
	return 0;
	
}

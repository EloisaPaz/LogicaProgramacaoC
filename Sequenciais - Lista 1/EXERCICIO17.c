/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 17 - Fa�a um algoritmo que calcule e mostre a �rea de um c�rculo, sabendo-se
que: �rea = p * R2 */

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
	int raio;
	float pi = 3.14, area = 0;
	
	printf("Qual o valor do raio do c�rculo? \n");
	scanf("%i", &raio);
	
	area = pi * (raio * raio);
	
	printf("A �rea do c�rculo �: %2.1f \n", area);
	
	system("pause");
	return 0;
}

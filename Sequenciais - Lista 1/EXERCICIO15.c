/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 15 - Fa�a um algoritmo que calcule e mostre a �rea de um tri�ngulo, sabendo-se
que: �rea = base * altura / 2.  */

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
	int area, base, altura;
	
	printf("Qual a base do tri�ngulo? \n");
	scanf("%i", &base);
	printf("Qual a altura do tri�ngulo? \n");
	scanf("%i", &altura);
	
	area = (base * altura)/2;
	
	printf("A �rea do tri�ngulo �: %i \n", area);
	
	system("pause");
	return 0;
}

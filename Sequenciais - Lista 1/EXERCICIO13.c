/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 13 - Fa�a um algoritmo que mostre o resultado da express�o abaixo:
(( x � 5) * y) � z
2
Obs: Ler valores para as vari�veis x, y e z.*/

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
	int x = 0, y = 0, z = 0;
	float resultado = 0;
	
	printf("Qual o valor de X? \n");
	scanf("%i", &x);
	printf("Qual o valor de Y? \n");
	scanf("%i", &y);
	printf("Qual o valor de Z? \n");
	scanf("%i", &z);
	
	resultado = ((x - 5) * y) - z;
	
	printf("O resultado da express�o (( X � 5) * Y) � Z �: %2.2f \n", resultado);
	
	system("pause");
	return 0;
}

/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 12 - Fa�a um algoritmo que leia valores para as vari�veis A, B e C e mostre o resultado da seguinte express�o:
( A � B ) * C*/

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
	int a, b, c;
	float resultado;
	
	printf("Insira o valor de A: \n");
	scanf("%i", &a);
	printf("Insira o valor de B: \n");
	scanf("%i", &b);
	printf("Insira o valor de C: \n");
	scanf("%i", &c);
	
	resultado = (a - b) * c;
	
	printf("O resultade de A - B x C �: %2.2f \n", resultado);
	
	system("pause");
	return 0;
}

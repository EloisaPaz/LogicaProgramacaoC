/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

// 1- Escreva um algoritmo que leia dois números e mostre o produto (multiplicação) desses números.

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
	int a, b, r;

	//configurando include locale
	setlocale(LC_ALL, "Portuguese");	
	//perguntando valor
	printf("\n Digite o primeiro número: ");
	//lendo o valor
	scanf("%i", &a);
	//perguntando valor
	printf("\n Digite o segundo número: ");
	//lendo o valor
	scanf("%i", &b);
	r = a * b;
	printf("\n O resultado é: %i", r);
	
	//pausando
	system("pause");
	return 0;
}

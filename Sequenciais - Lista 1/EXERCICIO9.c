/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 9 - Escreva um algoritmo que leia dois n�meros que dever�o ser colocados, respectivamente, nas vari�veis VA e VB. 
O algoritmo deve, ent�o, trocar os valores de VA por VB e VB por VA e mostrar o conte�do destas vari�veis.*/

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
	//set locale
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	int va, vb;
	
	printf("Digite o valor de VA: \n");
	scanf("%i", &va);
	printf("Digite o valor de VB: \n");
	scanf("%i", &vb);
	
	va = vb;
	vb = va;
	
	printf("O valor de VA �: %i e o valor de VB �: %i \n", va, vb);
	
	system("pause");
	return 0;
}

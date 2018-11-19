/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 9 - Escreva um algoritmo que leia dois números que deverão ser colocados, respectivamente, nas variáveis VA e VB. 
O algoritmo deve, então, trocar os valores de VA por VB e VB por VA e mostrar o conteúdo destas variáveis.*/

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
	
	printf("O valor de VA é: %i e o valor de VB é: %i \n", va, vb);
	
	system("pause");
	return 0;
}

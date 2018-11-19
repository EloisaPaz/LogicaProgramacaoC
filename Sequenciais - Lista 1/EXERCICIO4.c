/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

// 4 - Faça um algoritmo que receba 3 notas e respectivos pesos, calcule e mostre a média ponderada dessas notas.

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
	float n1, n2, n3, p1, p2, p3, media, soma;
	
	printf("Insira o peso 1: \n");
	scanf("%f", &p1);
	printf("Insira o nota 1: \n");
	scanf("%f", &n1);
	printf("Insira o peso 2: \n");
	scanf("%f", &p2);
	printf("Insira o nota 2: \n");
	scanf("%f", &n2);
	printf("Insira o peso 3: \n");
	scanf("%f", &p3);
	printf("Insira o nota 3: \n");
	scanf("%f", &n3);
	
	soma = (n1 * p1) + (n2 * p2) + (n3 * p3);
	media = soma /(p1 + p2 + p3);
	
	printf("A média ponderada é: %2.2f \n", media);
	
	system("pause");
	return 0;
}

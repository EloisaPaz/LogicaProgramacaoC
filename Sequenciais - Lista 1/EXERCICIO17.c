/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 17 - Faça um algoritmo que calcule e mostre a área de um círculo, sabendo-se
que: área = p * R2 */

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
	
	printf("Qual o valor do raio do círculo? \n");
	scanf("%i", &raio);
	
	area = pi * (raio * raio);
	
	printf("A área do círculo é: %2.1f \n", area);
	
	system("pause");
	return 0;
}

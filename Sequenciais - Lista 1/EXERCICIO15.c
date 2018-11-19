/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 15 - Faça um algoritmo que calcule e mostre a área de um triângulo, sabendo-se
que: área = base * altura / 2.  */

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
	
	printf("Qual a base do triângulo? \n");
	scanf("%i", &base);
	printf("Qual a altura do triângulo? \n");
	scanf("%i", &altura);
	
	area = (base * altura)/2;
	
	printf("A área do triângulo é: %i \n", area);
	
	system("pause");
	return 0;
}

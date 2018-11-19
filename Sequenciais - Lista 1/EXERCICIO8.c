/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 8 - Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F). 
(Fórmula de conversão: F = 9/5 * C + 32).*/

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
	//configurando locale
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	int c, f;
	
	printf("Insira a temperatura em Celsius: \n");
	scanf("%i", &c);
	
	f = 9/5 * c + 32;
	
	printf("A temperatura equivalente em Fahrenheit é: %i \n", f);
	
	system("pause");
	return 0;
}

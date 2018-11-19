/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 18 - Fa�a um algoritmo que receba um n�mero positivo e maior que zero, calcule e
mostre:
� o n�mero digitado ao quadrado
� o n�mero digitado ao cubo
� a raiz quadrada do n�mero digitado*/

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
	int numero, quadrado, cubo, raiz;
	
	printf("Digite um n�mero: \n");
	scanf("%i", &numero);
	
	while(numero < 0){
		printf("N�mero inv�lido! Digite um n�mero maior que zero: \n");
		scanf("%i", &numero);
	}
	
	if(numero > 0){
		quadrado = sqrt(numero);
		cubo = numero * numero * numero;
		raiz = pow(numero, 2);
		
		printf("\n O n�mero ao quadrado �: %i \n \n O n�mero ao cubo �: %i \n \n A raiz quadrada �: %i \n", quadrado, cubo, raiz);
	}
	
	system("pause");
	return 0;
}

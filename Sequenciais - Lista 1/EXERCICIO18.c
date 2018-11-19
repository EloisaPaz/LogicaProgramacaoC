/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 18 - Faça um algoritmo que receba um número positivo e maior que zero, calcule e
mostre:
• o número digitado ao quadrado
• o número digitado ao cubo
• a raiz quadrada do número digitado*/

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
	
	printf("Digite um número: \n");
	scanf("%i", &numero);
	
	while(numero < 0){
		printf("Número inválido! Digite um número maior que zero: \n");
		scanf("%i", &numero);
	}
	
	if(numero > 0){
		quadrado = sqrt(numero);
		cubo = numero * numero * numero;
		raiz = pow(numero, 2);
		
		printf("\n O número ao quadrado é: %i \n \n O número ao cubo é: %i \n \n A raiz quadrada é: %i \n", quadrado, cubo, raiz);
	}
	
	system("pause");
	return 0;
}

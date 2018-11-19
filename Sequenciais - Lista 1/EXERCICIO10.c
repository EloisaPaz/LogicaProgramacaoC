/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 10 - Escrever um algoritmo que lê o número de peças do Tipo 1, o valor de cada peça do Tipo 1, 
o número de peças do Tipo 2, o valor de cada peça do Tipo 2 e o percentual do IPI (usado 5%) a ser acrescentado. 
Calcula e escreve o valor total a ser pago por esta compra.*/

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
	int numroupa1 = 0, numroupa2 = 0;
	float valorroupa1 = 0, valorroupa2 = 0, total1 = 0, total2 = 0;
	
	printf("\n Quantas peças de roupa do tipo 1 foram adquiridas? ");
	scanf("%i", &numroupa1);
	printf("\n Qual o valor pago por cada peça? R$ ");
	scanf("%f", &valorroupa1);
	
	printf("\n Quantas peças de roupa do tipo 2 foram adquiridas? ");
	scanf("%i", &numroupa2);
	printf("\n Qual o valor pago por cada peça? R$ ");
	scanf("%f", &valorroupa2);
	
	total1 = (numroupa1 * (valorroupa1 * 0.5));
	total2 = (numroupa2 * (valorroupa2 * 0.5));
	
	printf("\n O valor total das peças de tipo 1 é: R$ %2.2f", total1);
	printf("\n O valor total das peças de tipo 2 é: R$ %2.2f", total2);
	
	system("pause");
	return 0;
}

/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

// 3 - Faça um algoritmo que calcule a média de 3 números e apresente o resultado no final.

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
	float n1, n2, n3, r;

	//configurando include locale
	setlocale(LC_ALL, "Portuguese");	
	//perguntando valor
	printf("\n Digite o primeira nota: ");
	//lendo o valor
	scanf("%f", &n1);
	//perguntando valor
	printf("\n Digite a segunda nota: ");
	//lendo o valor
	scanf("%f", &n2);
	//perguntando o valor
	printf("\n Digite a terceira nota: ");
	//lendo o valor
	scanf("%f", &n3);
	//média
	r = (n1+n2+n3)/3;
	//mostra resultado
	printf("\n A média é: %2.2f", r);
	
	//pausando
	system("pause");
	return 0;
}

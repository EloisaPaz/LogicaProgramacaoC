/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 11 - Fa�a um algoritmo que receba o sal�rio de um funcion�rio e o percentual de aumento, 
calcule e mostre o valor do aumento e o novo sal�rio.*/

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
	
	float salario, aumento;
	int porcentagem;
	
	printf("\n Insira o valor do sal�rio atual R$ ");
	scanf("%f", &salario);
	printf("\n Insira a porcentagem do aumento %% ");
	scanf("%i", &porcentagem);
	
	aumento = (salario * porcentagem)/100; 
	
	printf("\n O valor do novo sal�rio � R$ %3.2f", aumento);
	
	system("pause");
	return 0;
	
}

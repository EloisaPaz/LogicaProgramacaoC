/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 14 - Fa�a um algoritmo que receba o sal�rio-base de um funcion�rio, calcule e
mostre o sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de
5% sobre o sal�rio base e paga imposto de 7% sobre o sal�rio base.*/

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

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float salario, gratificacao, imposto;
	
	printf("\n Insira o valor do sal�rio base: R$ ");
	scanf("%f", &salario);
	
	gratificacao = (salario * 5)/100;
	imposto = (salario * 7)/100;
	
	printf("\n O valor do sal�rio a receber �: R$ %3.2f", salario + gratificacao - imposto);
	
	system("pause");
	return 0;
}

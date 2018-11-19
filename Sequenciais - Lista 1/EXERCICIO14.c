/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 14 - Faça um algoritmo que receba o salário-base de um funcionário, calcule e
mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de
5% sobre o salário base e paga imposto de 7% sobre o salário base.*/

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
	
	printf("\n Insira o valor do salário base: R$ ");
	scanf("%f", &salario);
	
	gratificacao = (salario * 5)/100;
	imposto = (salario * 7)/100;
	
	printf("\n O valor do salário a receber é: R$ %3.2f", salario + gratificacao - imposto);
	
	system("pause");
	return 0;
}

/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 24 - Faça um algoritmo que leia a quantidade de horas trabalhadas e o valor pago
por hora, calcule e mostre o salário bruto, salário líquido e o valor do INSS,
sabendo que a alíquota de INSS é de 11%. */

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
	int horas_trab;
	float valor_hora, bruto, liquido, inss;
	
	printf("Qual a quantidade de horas trabalhadas? \n");
	scanf("%i", &horas_trab);
	printf("Qual o valor pago por hora trabalhada? \n");
	scanf("%i", &valor_hora);
	
	bruto = horas_trab * valor_hora;
	inss = bruto * 0.11;
	
	printf("INSS: %2.2f \n", inss);
}

/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */
   
/* 7 - Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este teve um aumento de 25%.*/

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
	//locale
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	float salario, aumento;
	
	printf("Digite o valor do sal�rio atual R$");
	scanf("%f", &salario);
	aumento = salario + ((salario * 25)/100);
	printf("O valor do novo sal�rio � R$ %2.2f \n", aumento);
	
	system("pause");
	return 0;
}

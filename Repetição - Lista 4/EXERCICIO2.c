/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 2 - Algoritmo para repetir a leitura de um n�mero enquanto o valor fornecido for diferente de 0. 
Para cada n�mero fornecido, imprimir se ele � NEGATIVO ou POSITIVO. 
Quando o n�mero 0 for fornecido � repeti��o deve ser encerrada sem imprimir mensagem alguma.*/

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
	
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	int num1 = 0;
	
	do{
		printf("Digite um n�mero: \n");
		scanf("%i", &num1);
		fflush(stdin);
		
		if(num1 > 0){
			printf("Positivo!\n");
		}else if (num1 < 0){
			printf("Negativo!\n");
		}
	}while(num1 != 0);
	
	system("pause");
	return 0;
	
}

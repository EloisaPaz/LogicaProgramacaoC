/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 1 - Algoritmo para ler uma quantidade indeterminada de valores inteiros. 
Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido � PAR ou �MPAR. 
O algoritmo ser� encerrado imediatamente ap�s a leitura de um valor NEGATIVO.*/

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
		
		if(num1 %2 == 0){
			printf("PAR!\n");
		}else{
			printf("IMPAR!\n");
		}
	}while(num1 > 0);
	
	system("pause");
	return 0;
	
}

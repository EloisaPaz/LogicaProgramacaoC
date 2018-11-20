/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 1 - Algoritmo para ler uma quantidade indeterminada de valores inteiros. 
Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. 
O algoritmo será encerrado imediatamente após a leitura de um valor NEGATIVO.*/

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
		printf("Digite um número: \n");
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

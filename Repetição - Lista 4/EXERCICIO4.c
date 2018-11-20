/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 4 - Ler uma quantidade indeterminada de duplas de valores (2 valores de cada vez). 
Escrever para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. 
A repetição será encerrada ao ser fornecido, para os elementos da dupla, valores iguais.*/

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
	int num1 = 0, num2 = 0;
	
	do{
		printf("Digite o primeiro número: \n");
		scanf("%i", &num1);
		fflush(stdin);
		printf("Digite o segundo número: \n");
		scanf("%i", &num2);
		fflush(stdin);
		
		if(num1 > num2){
			printf("%i %i Decrescente\n", num1, num2);
		}else if (num1 < num2){
			printf("%i %i Crescente\n", num2, num1);
		}
	}while(num1 != num2);
	
	system("pause");
	return 0;
	
}

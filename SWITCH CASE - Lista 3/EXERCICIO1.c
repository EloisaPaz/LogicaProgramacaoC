/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 1- Elabore um programa que solicite ao usuário que digite o dia da semana em números e exiba por extenso. 
Caso ele digite um número inválido exibir mensagem na tela. */

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
	int dia;
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o dia da semana (1 = domingo, 2 = segunda...): ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("É domingo");
		break;
		case 2:
			printf("É segunda");
		break;
		case 3:
			printf("É terça");
		break;
		case 4:
			printf("É quarta");
		break;
		case 5:
			printf("É quinta");
		break;
		case 6:
			printf("É sexta");
		break;
		case 7:
			printf("É sábado");
		break;
	}
	
	//pausando
	system("pause");
	return 0;	
}

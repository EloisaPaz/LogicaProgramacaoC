/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 4 - Faça um programa que receba duas notas, calcule e mostre a média aritmética e mensagem que está na tabela a seguir:
0,0 - 4,0 - Reprovado 
4,1 - 7,0 - Exame 
7,1 - 10 - Aprovado  */

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
	float nota1,nota2, media; 
	int mensagem;
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("\n Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	if(media == 0 && media <= 4){
		mensagem = 1;
	}else if(media == 4,1 && media <= 7){
		mensagem = 2;
	}else if(media == 7,1 && media <= 10){
		mensagem = 3;
	}
	
	switch(mensagem){
		case 1:
			printf("O aluno foi reprovado!");
		break;
		case 2:
			printf("O aluno ficou em exame!");
		break;
		case 3:
			printf("O aluno foi aprovado!");
		break;
		
	}
	
	//pausando
	system("pause");
	return 0;	
}

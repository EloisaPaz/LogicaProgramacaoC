/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 12 - Faça um programa que receba a idade de 5 pessoas e mostre mensagem informando "maior de idade" ou 
"menor de idade" para cada pessoa. Considere a idade a partir de 18 anos, inclusive como maior de idade. */

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
	int i, idade;

	for(i = 1; i <= 5; i++){
		printf("\nDigite a sua idade: ");
		scanf("%d", &idade);
		
		if(idade >= 18){
			printf("\nVocê é maior de idade!");
		}else{
			printf("\nVocê é menor de idade!");
		}
	}
	
	//pausando
	system("pause");
	return 0;	
}

/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

// 2 - Faça um algoritmo que leia o nome e as idades de duas pessoas e mostre a soma das idades destas pessoas.

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
	char nome1 [50], nome2[50];
	int idade1, idade2;
	
	printf("Digite seu nome: \n");
	fflush(stdin);
	gets(nome1);
	printf("Digite a sua idade: \n");
	scanf("%i", &idade1);
	printf("Digite seu nome: \n");
	fflush(stdin);
	gets(nome2);
	printf("Digite a sua idade: \n");
	scanf("%i", &idade2);
	
	printf("A soma das idades é: %i \n", idade1 + idade2);
	
	system("pause");
	return 0;
}

/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 20 - Fazer um algoritmo para ler duas notas, os pesos de cada nota e mostrar a
média ponderada.
(nota 1 * peso da nota 1) + (nota 2 * peso da nota 2)
Cálculo da Média Ponderada = soma dos pesos*/

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
	float nota1, peso1, nota2, peso2, media;
	
	printf("Insira a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Insira o peso da primeira nota: \n");
	scanf("%f", &peso1);
	printf("Insira a segunda nota: \n");
	scanf("%f", &nota2);
	printf("Insira o peso da segunda nota: \n");
	scanf("%f", peso2);
	
	media = (nota1 * peso1) + (nota2 * peso2);
	
	printf("A média ponderada é: %2.2f \n", media);
	
	system("pause");
	return 0;
}

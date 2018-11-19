/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 22 - custo ao consumidor de um carro novo é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica.
Supondo que a porcentagem do distribuidor seja de 12% e a dos impostos de
45%, prepare um algoritmo para ler o custo de fábrica do carro e imprimir o custo
ao consumidor.*/

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
	float custo_fabrica, custo_consumidor, distribuidor, imposto;
	
	printf("Qual o custo de fábrica do carro? \n");
	scanf("%f", &custo_fabrica);
	
	distribuidor = (custo_fabrica * 12)/100;
	imposto = (custo_fabrica * 45)/100;
	custo_consumidor = custo_fabrica + distribuidor + imposto;
	
	printf("O custo final do consumidor é: R$ %3.2f \n", custo_consumidor);
	
	system("pause");
	return 0;
}

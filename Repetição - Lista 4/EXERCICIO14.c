/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 14 - Fa�a um programa onde o usu�rio digite o valor do ve�culo e o algoritmo calcule e apresente o desconto, conforme segue:
a) Ve�culos acima ou igual a 50.000,00 - desconto de 5%
b) Ve�culos abaixo de 50.000,00 - desconto de 2%
Ao digitar 0 no valor do ve�culo o algoritmo deve abortar a execu��o. */

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
	float veiculo, desconto; 
	do{
	printf("Digite o valor do ve�culo R$ ");
	scanf("%f", &veiculo);
	
	if(veiculo >=50000 ){
		desconto = (veiculo * 5)/ 100;
	}else{
		desconto = (veiculo * 2)/100;
	}
		printf("\nO ve�culo no valor de %5.2f recebe o desconto no valor de %5.2f\n", veiculo, desconto);
}while(veiculo != 0 && veiculo > 0);
	
	//pausando
	system("pause");
	return 0;	
}

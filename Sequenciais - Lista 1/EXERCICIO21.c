/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 21 - Um hotel possui quartos executivos com descontos variados conforme o dia e
o hor�rio. O valor cobrado � por pessoa e por hora. Escrever um algoritmo que l�
o n�mero de pessoas, o pre�o por hora, o tempo de perman�ncia e o percentual
de desconto concedido e escreve o valor total a ser pago.*/

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
	int num_pessoas, num_horas;
	float preco_hora, valor_desconto, total, total_desconto;
	
	printf("Quantas pessoas ficaram no hotel? \n");
	scanf("%i", &num_pessoas);
	printf("Por quanto tempo? \n");
	scanf("%i", &num_horas);
	printf("Qual o pre�o por hora? \n");
	scanf("%f", &preco_hora);
	printf("Qual a porcentagem do desconto? \n");
	scanf("%f", &valor_desconto);
	
	total = (num_horas * preco_hora) * num_pessoas;
	total_desconto = (total * valor_desconto)/100;
	
	total = total - total_desconto;
	
	printf("\n O valor total �: R$ %3.2f \n", total);
	
	system("pause");
	return 0;
	
	
	}

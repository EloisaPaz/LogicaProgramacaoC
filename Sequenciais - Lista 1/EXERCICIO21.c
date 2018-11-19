/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 21 - Um hotel possui quartos executivos com descontos variados conforme o dia e
o horário. O valor cobrado é por pessoa e por hora. Escrever um algoritmo que lê
o número de pessoas, o preço por hora, o tempo de permanência e o percentual
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
	printf("Qual o preço por hora? \n");
	scanf("%f", &preco_hora);
	printf("Qual a porcentagem do desconto? \n");
	scanf("%f", &valor_desconto);
	
	total = (num_horas * preco_hora) * num_pessoas;
	total_desconto = (total * valor_desconto)/100;
	
	total = total - total_desconto;
	
	printf("\n O valor total é: R$ %3.2f \n", total);
	
	system("pause");
	return 0;
	
	
	}

/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 23 - Uma companhia de carros paga a seus empregados um sal�rio de R$ 500,00
por m�s mais uma comiss�o de R$ 50,00 para cada carro vendido e mais 5% do
valor da venda. Elabore um algoritmo para calcular e imprimir o sal�rio do vendedor num dado m�s 
recebendo como dados de entrada o nome do vendedor, o n�mero de carros vendidos e o valor total das vendas.*/

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
	int quantidade_carro;
	float comissao, valor_venda, venda_total, salario;
	char nome [50];
	
	printf("Digite o nome do funcion�rio: \n");
	gets(nome);
	fflush(stdin);
	printf("Digite a quantidade total de carros vendidos: \n");
	scanf("%i", &quantidade_carro);
	printf("Digite o valor total das vendas: \n");
	scanf("%f", &valor_venda);
	
	comissao = quantidade_carro * 50;
	venda_total = valor_venda * 0.05;
	salario = 500 + comissao + venda_total;
	
	printf("\n Nome do funcion�rio: %s \n S�lario: %3.2f \n", nome, salario);
	
	system("pause");
	return 0;
}

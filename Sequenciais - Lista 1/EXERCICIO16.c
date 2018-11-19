/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 16 - Escrever um algoritmo que lê o número de um funcionário, seu número de
horas trabalhadas, o valor que recebe por hora, o número de filhos com idade
menor do que 14 anos e o valor do salário família (pago por filho com menos de
14 anos). Calcular o salário total desse funcionário e escrever o seu número e o
seu salário total.*/

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
	int num_funcionario, num_horas, num_filhos; 
	float valor_hora, salario_familia, salario_total;
	
	printf("\n Insira o número do funcionário: ");
	scanf("%i", &num_funcionario);
	printf("\n Insira o número de horas trabalhadas: ");
	scanf("%i", &num_horas);
	printf("\n Insira o valor da hora trabalhada: R$ ");
	scanf("%f", &valor_hora);
	printf("\n Insira o número de filhos menor de 14 anos: ");
	scanf("%i", &num_filhos);
	printf("\n Insira o valor do salário família: R$ ");
	scanf("%f", &salario_familia);
	
	salario_total = (num_horas * valor_hora) + (num_filhos * salario_familia);
	
	printf("\n O valor do salário total é R$ %4.2f \n", salario_total);
	
	system("pause");
	return 0;
	
}

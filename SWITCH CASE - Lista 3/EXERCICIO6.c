/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 6 - O cardápio de uma casa de lanches é dado pela tabela abaixo: 
Código 100 - Cachorro quente - 1,70
Código 101 - Bauru simples - 2,30
Código 102 - Bauru com ovo - 2,60
Código 103 - Hamburguer - 2,40
Código 104 - Cheesburguer - 2,50
Código 105 - Refrigerante - 1,00
Escreva um algoritmo que leia o código do item adquirido pelo consumidor 
e a quantidade, calculando e mostrando o valor a pagar. Não será necessário exibir o produto e o valor, somente o valor final.*/

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
	int codigo, produto, quantidade;
	float total;
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Digite o produto adquirido pelo cliente: \n 100 = Cachorro Quente \n 101 = Bauru Simples \n 102 = Bauru com ovo \n 103 = Hamburguer \n 104 = Cheeseburguer \n 105 = Refrigerante \n ");
	scanf("%i", &produto);
	printf("\n Digite a quantidade: ");
	scanf("%i", &quantidade);
	
	switch(produto){
		case 100:
			total = 1.70 * quantidade;
			printf("O valor total é: %0.2f", total);	
		break;
		case 101:
			total = 2.30 * quantidade;
			printf("O valor total é: %0.2f", total);
		break;
		case 102:
			total = 2.60 * quantidade;
			printf("O valor total é: %0.2f", total);
		break;
		case 103:
			total = 2.40 * quantidade;
			printf("O valor total é: %0.2f", total);
		break;
		case 104:
			total = 2.50 * quantidade;
			printf("O valor total é: %0.2f", total);
		break;
		case 105:
			total = 1 * quantidade;
			printf("O valor total é: %0.2f", total);
		break;
		
		default: printf("Digite uma opção válida!");
		
	}// fecha switch
		
	//pausando
	system("pause");
	return 0;	
}

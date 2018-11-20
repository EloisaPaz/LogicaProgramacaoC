/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 9 - Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência
de seus clientes. Fazer um algoritmo para ler o tipo de combustível abastecido
(codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário
informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código
(até que seja válido). Ao ser informado o código do combustível, o seu respectivo nome
deve ser impresso na tela. O programa será encerrado quando o código informado for
o número 4 escrevendo então a mensagem: "MUITO OBRIGADO" e a quantidade de
clientes que abasteceram cada tipo de combustível.*/

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
	
	//configurando setlocale
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	int menu, alcool, gasolina, diesel;
	
	do{
		printf("Insira o tipo de combustível: \n 1 - Álcool \n 2 - Gasolina \n 3- Diesel \n 4 - Fim \n");
		scanf("%i", &menu);
		
		while(menu != 1 && menu != 2 && menu != 3 && menu != 4){
			printf("Código inválido! \n");
			printf("Insira o tipo de combustível: \n 1 - Álcool \n 2 - Gasolina \n 3 - Diesel \n 4 - Fim \n");
			scanf("%i", &menu);
		}
		
		switch(menu){
			case 1: 
				printf("Você escolheu Álcool \n");
				alcool ++;
			break;
			case 2:
				printf("Você escolheu Gasolina \n");
				gasolina ++;
			break;
			case 3:
				printf("Você escolheu Diesel \n");
				diesel ++;
			break;
			case 4:
				printf("Muito Obrigado! \n Veja abaixo a quantidade de clientes que abasteceram com cada combustível: \n Álcool: %i \n Gasolina: %i \n Diesel: %i \n", alcool, gasolina, diesel);
			break;
		}
	}while(menu != 4);
	
	system("pause");
	return 0;
}

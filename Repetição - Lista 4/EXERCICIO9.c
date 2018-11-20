/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 9 - Um Posto de combust�veis deseja determinar qual de seus produtos tem a prefer�ncia
de seus clientes. Fazer um algoritmo para ler o tipo de combust�vel abastecido
(codificado da seguinte forma: 1.�lcool 2.Gasolina 3.Diesel 4.Fim). Caso o usu�rio
informe um c�digo inv�lido (fora da faixa de 1 a 4) deve ser solicitado um novo c�digo
(at� que seja v�lido). Ao ser informado o c�digo do combust�vel, o seu respectivo nome
deve ser impresso na tela. O programa ser� encerrado quando o c�digo informado for
o n�mero 4 escrevendo ent�o a mensagem: "MUITO OBRIGADO" e a quantidade de
clientes que abasteceram cada tipo de combust�vel.*/

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
		printf("Insira o tipo de combust�vel: \n 1 - �lcool \n 2 - Gasolina \n 3- Diesel \n 4 - Fim \n");
		scanf("%i", &menu);
		
		while(menu != 1 && menu != 2 && menu != 3 && menu != 4){
			printf("C�digo inv�lido! \n");
			printf("Insira o tipo de combust�vel: \n 1 - �lcool \n 2 - Gasolina \n 3 - Diesel \n 4 - Fim \n");
			scanf("%i", &menu);
		}
		
		switch(menu){
			case 1: 
				printf("Voc� escolheu �lcool \n");
				alcool ++;
			break;
			case 2:
				printf("Voc� escolheu Gasolina \n");
				gasolina ++;
			break;
			case 3:
				printf("Voc� escolheu Diesel \n");
				diesel ++;
			break;
			case 4:
				printf("Muito Obrigado! \n Veja abaixo a quantidade de clientes que abasteceram com cada combust�vel: \n �lcool: %i \n Gasolina: %i \n Diesel: %i \n", alcool, gasolina, diesel);
			break;
		}
	}while(menu != 4);
	
	system("pause");
	return 0;
}

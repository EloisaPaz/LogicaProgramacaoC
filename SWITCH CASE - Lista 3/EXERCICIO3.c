/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 3 - Leia o código de um determinado produto e mostre sua classificação. Utilize a seguinte tabela como referência: 
Código 1 - Alimento não perecível 
Código 2, 3 ou 4 - Alimento perecível
Código 5 ou 6 - Vestuário 
Código 7 - Higiene pessoal 
Código 8 até 15 - Limpeza e utensilios domésticos 
Qualquer outro código - código inválido */

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
	int codigo;
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Digite o código do produto: \n 1 = Alimento não-perecível \n 2, 3 ou 4 = Alimento perecível \n 5 e 6 = Vestuário \n 7 = Higiene Pessoal \n 8 até 15 = Limpeza e Utensílios Domésticos \n");
	scanf("%i", &codigo);
	
	switch(codigo){
		case 1:
			printf("Cadastrado em Alimento não-perecível!");
		break;
		case 2 ... 4:
			printf("Cadastrado em Alimento perecível!");
		break;
		case 5 ... 6:
			printf("Cadastrado em Vestuário!");
		break;
		case 7:
			printf("Cadastrado em Higiene pessoal!");
		break;
		case 8 ... 15:
			printf("Cadastrado em Limpeza e Utensílios Domésticos!");
		break;
		
		default: printf("Código inválido!");
		
	}
	
	//pausando
	system("pause");
	return 0;	
}

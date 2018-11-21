/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 3 - Leia o c�digo de um determinado produto e mostre sua classifica��o. Utilize a seguinte tabela como refer�ncia: 
C�digo 1 - Alimento n�o perec�vel 
C�digo 2, 3 ou 4 - Alimento perec�vel
C�digo 5 ou 6 - Vestu�rio 
C�digo 7 - Higiene pessoal 
C�digo 8 at� 15 - Limpeza e utensilios dom�sticos 
Qualquer outro c�digo - c�digo inv�lido */

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
	
	printf("\n Digite o c�digo do produto: \n 1 = Alimento n�o-perec�vel \n 2, 3 ou 4 = Alimento perec�vel \n 5 e 6 = Vestu�rio \n 7 = Higiene Pessoal \n 8 at� 15 = Limpeza e Utens�lios Dom�sticos \n");
	scanf("%i", &codigo);
	
	switch(codigo){
		case 1:
			printf("Cadastrado em Alimento n�o-perec�vel!");
		break;
		case 2 ... 4:
			printf("Cadastrado em Alimento perec�vel!");
		break;
		case 5 ... 6:
			printf("Cadastrado em Vestu�rio!");
		break;
		case 7:
			printf("Cadastrado em Higiene pessoal!");
		break;
		case 8 ... 15:
			printf("Cadastrado em Limpeza e Utens�lios Dom�sticos!");
		break;
		
		default: printf("C�digo inv�lido!");
		
	}
	
	//pausando
	system("pause");
	return 0;	
}

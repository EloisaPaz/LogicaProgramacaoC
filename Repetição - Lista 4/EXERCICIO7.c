/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 7 - Algoritmo que verifique a validade de uma senha fornecida pelo usu�rio. A senha v�lida � o n�mero 1234.
OBS: Se a senha informada pelo usu�rio for inv�lida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida 
a solicita��o de uma nova senha at� que ela seja v�lida. 
Caso contr�rio deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um n�mero que representa quantas vezes a senha foi informada.*/

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
	int senha, cont;
	
	printf("Digite a senha: \n");
	scanf("%i", &senha);
	cont ++;
	
	while(senha != 1234){
		printf("Acesso Negado!\n Digite a senha: \n");
		scanf("%i", &senha);
		cont ++;
	}
	
	if(senha == 1234){
		printf("Acesso permitido!\n A senha foi informada %i vezes.", cont);
	}
	
}

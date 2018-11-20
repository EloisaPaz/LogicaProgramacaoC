/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 7 - Algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida 
a solicitação de uma nova senha até que ela seja válida. 
Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.*/

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

/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 3 - Algoritmo para ler as notas da 1� e 2� avalia��es de um aluno, calcular e imprimir a m�dia aritm�tica semestral. 
Fa�a com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente. 
Deve ser impressa a mensagem "Nota inv�lida" caso a nota informada n�o perten�a ao intervalo [0,10]. 
O algoritmo termina quando for digitado a primeira nota negativa.*/

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
	float nota1, nota2, media;
	
	do{
		printf("Digite a primeira nota: \n");
		
		if(nota1 >= 0 && nota1 <= 10){
			scanf("%f", &nota1);
			fflush(stdin);
		}else
		
		printf("Digite o segundo n�mero: \n");
		scanf("%i", &num2);
		fflush(stdin);
		
		if(num2 == 0){
			printf("Valor inv�lido! Por favor digite um novo valor: \n");
			scanf("%i", &num2);
			fflush(stdin);
		}
		
		resultado = num1*num2;
		printf("O resultado da divis�o �: %i \n", resultado);
		total ++;
		
		printf("Voc� deseja outro c�lculo?\n 1 - SIM \n 2 - N�O\n");
		scanf("%i",&resp);
		
		switch(resp){
			case 1:
				printf("Voc� escolheu fazer um novo c�lculo!\n");
			break;
			case 2:
				printf("Voc� escolheu fechar o programa!\n");
			break;
			default: printf("Escolha uma op��o v�lida!\n");
		}
	}while(resp != 2);
	
		printf("O total de c�lculos feitos foi: %i\n", total);
	
	system("pause");
	return 0;
	
}

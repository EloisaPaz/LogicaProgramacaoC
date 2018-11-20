/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 3 - Algoritmo para ler as notas da 1ª e 2ª avaliações de um aluno, calcular e imprimir a média aritmética semestral. 
Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente. 
Deve ser impressa a mensagem "Nota inválida" caso a nota informada não pertença ao intervalo [0,10]. 
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
		
		printf("Digite o segundo número: \n");
		scanf("%i", &num2);
		fflush(stdin);
		
		if(num2 == 0){
			printf("Valor inválido! Por favor digite um novo valor: \n");
			scanf("%i", &num2);
			fflush(stdin);
		}
		
		resultado = num1*num2;
		printf("O resultado da divisão é: %i \n", resultado);
		total ++;
		
		printf("Você deseja outro cálculo?\n 1 - SIM \n 2 - NÃO\n");
		scanf("%i",&resp);
		
		switch(resp){
			case 1:
				printf("Você escolheu fazer um novo cálculo!\n");
			break;
			case 2:
				printf("Você escolheu fechar o programa!\n");
			break;
			default: printf("Escolha uma opção válida!\n");
		}
	}while(resp != 2);
	
		printf("O total de cálculos feitos foi: %i\n", total);
	
	system("pause");
	return 0;
	
}

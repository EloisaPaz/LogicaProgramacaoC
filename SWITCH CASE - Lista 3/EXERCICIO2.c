/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 2 - Elabore um programa utilizando o comando switch que solicite ao usuário que digite dois números inteiros e após ele escolha uma operação para
realizar conforme a seguinte tabela: 
1 - Adição 
2 - Subtração 
3 - Multiplicação 
4 - Divisão 
Caso ele digite um número inválido, exiba a mensagem na tela de opção inválida. Exiba o resultado da operação realizada. */

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

 main(){
	//variaveis
	int num1,num2, op, resultado;
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Lembre-se que a matemática não aceita divisão por zero!");
	printf("\n Digite o primeiro número inteiro: ");
	scanf("%i", &num1);
	printf("\n Digite o segundo número inteiro: ");
	scanf("%i", &num2);
	printf("Digite a operação desejada: \n1 = Soma \n2 = Subtração \n3 = Multiplicação  \n4 = Divisão \n ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			resultado = num1 + num2;
			printf("O resultado da soma dos dois números é: %i", resultado);
		break;
		case 2:
			resultado = num1 - num2;
			printf("O resultado da subtração dos dois números é: %i", resultado);
		break;
		case 3:
			resultado = num1 * num2;
			printf("O resultado da multiplicação dos dois números é: %i", resultado);
		break;
		case 4:
			resultado = num1 / num2;
			printf("O resultado da divisão dos dois números é: %i", resultado);
		break;
		
		default: printf("Digite uma opção válida!");
		
	}
	
	//pausando
	system("pause");	
}

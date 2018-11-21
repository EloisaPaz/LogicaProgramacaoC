/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 5 - Faça um programa que receba dois números e execute as operações listadas a seguir de acordo com a escolha do usuário: 
1 - Média entre os números digitados 
2 - Diferença entre os núemros 
3 - Produto entre os números digitados 
4 - Divisão do primeiro pelo segundo 
Se a opção digitada for inválida, mostrar uma mensagem de erro e terminar a execução do programa.*/

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
	int op; 
	float resultado, num1,num2;
	//configurando include locale
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Lembre-se que a matemática não aceita divisão por zero!");
	printf("\n Digite o primeiro número: ");
	scanf("%f", &num1);
	fflush(stdin);
	printf("\n Digite o segundo número: ");
	scanf("%f", &num2);
	fflush(stdin);
	printf("Digite a operação desejada: \n1 = Média \n2 = Diferença \n3 = Produto  \n4 = Divisão \n ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			resultado = (num1 + num2)/2;
			printf("O resultado da média dos dois números é: %0.2f", resultado);
		break;
		case 2:
			resultado = num1 - num2;
			printf("O resultado da diferença dos dois números é: %0.2f", resultado);
		break;
		case 3:
			resultado = num1 * num2;
			printf("O resultado do produto dos dois números é: %0.2f", resultado);
		break;
		case 4:
			resultado = num1 / num2;
			printf("O resultado da divisão dos dois números é: %0.2f", resultado);
		break;
		
		default: printf("Digite uma opção válida!");
		
	}
	
	//pausando
	system("pause");
	return 0;	
}

/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 5 - Fa�a um programa que receba dois n�meros e execute as opera��es listadas a seguir de acordo com a escolha do usu�rio: 
1 - M�dia entre os n�meros digitados 
2 - Diferen�a entre os n�emros 
3 - Produto entre os n�meros digitados 
4 - Divis�o do primeiro pelo segundo 
Se a op��o digitada for inv�lida, mostrar uma mensagem de erro e terminar a execu��o do programa.*/

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
	
	printf("\n Lembre-se que a matem�tica n�o aceita divis�o por zero!");
	printf("\n Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	fflush(stdin);
	printf("\n Digite o segundo n�mero: ");
	scanf("%f", &num2);
	fflush(stdin);
	printf("Digite a opera��o desejada: \n1 = M�dia \n2 = Diferen�a \n3 = Produto  \n4 = Divis�o \n ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			resultado = (num1 + num2)/2;
			printf("O resultado da m�dia dos dois n�meros �: %0.2f", resultado);
		break;
		case 2:
			resultado = num1 - num2;
			printf("O resultado da diferen�a dos dois n�meros �: %0.2f", resultado);
		break;
		case 3:
			resultado = num1 * num2;
			printf("O resultado do produto dos dois n�meros �: %0.2f", resultado);
		break;
		case 4:
			resultado = num1 / num2;
			printf("O resultado da divis�o dos dois n�meros �: %0.2f", resultado);
		break;
		
		default: printf("Digite uma op��o v�lida!");
		
	}
	
	//pausando
	system("pause");
	return 0;	
}

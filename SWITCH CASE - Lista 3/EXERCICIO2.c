/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 2 - Elabore um programa utilizando o comando switch que solicite ao usu�rio que digite dois n�meros inteiros e ap�s ele escolha uma opera��o para
realizar conforme a seguinte tabela: 
1 - Adi��o 
2 - Subtra��o 
3 - Multiplica��o 
4 - Divis�o 
Caso ele digite um n�mero inv�lido, exiba a mensagem na tela de op��o inv�lida. Exiba o resultado da opera��o realizada. */

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
	
	printf("\n Lembre-se que a matem�tica n�o aceita divis�o por zero!");
	printf("\n Digite o primeiro n�mero inteiro: ");
	scanf("%i", &num1);
	printf("\n Digite o segundo n�mero inteiro: ");
	scanf("%i", &num2);
	printf("Digite a opera��o desejada: \n1 = Soma \n2 = Subtra��o \n3 = Multiplica��o  \n4 = Divis�o \n ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			resultado = num1 + num2;
			printf("O resultado da soma dos dois n�meros �: %i", resultado);
		break;
		case 2:
			resultado = num1 - num2;
			printf("O resultado da subtra��o dos dois n�meros �: %i", resultado);
		break;
		case 3:
			resultado = num1 * num2;
			printf("O resultado da multiplica��o dos dois n�meros �: %i", resultado);
		break;
		case 4:
			resultado = num1 / num2;
			printf("O resultado da divis�o dos dois n�meros �: %i", resultado);
		break;
		
		default: printf("Digite uma op��o v�lida!");
		
	}
	
	//pausando
	system("pause");	
}

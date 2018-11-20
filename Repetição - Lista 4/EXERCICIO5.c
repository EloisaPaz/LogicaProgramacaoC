/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 5 - Algoritmo para ler as notas da 1� e 2� avalia��es de um aluno, calcular e imprimir a m�dia aritm�tica semestral. 
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
		scanf("%f", &nota1);
		fflush(stdin);
		
		if(nota1 >= 0){
			if(nota1 >= 0 && nota1 <= 10){
				printf("Nota v�lida!\n");
			}else{
				printf("Nota inv�lida!\n");
				printf("Digite uma nota v�lida: \n");
				scanf("%f", &nota1);
				fflush(stdin);
			}
		}
		
		printf("Digite a segunda nota: \n");
		scanf("%f", &nota2);
		fflush(stdin);
		
		if(nota2 >= 0){
			if(nota2 >= 0 && nota2 <= 10){
				printf("Nota v�lida!\n");	
			}else{
				printf("Nota inv�lida!\n");
				printf("Digite uma nota v�lida: \n");
				scanf("%f", &nota2);
				fflush(stdin);
			}
		}
		
		if(nota1 >= 0 && nota2 >= 0){
			media = (nota1 + nota2)/2;
			printf("Sua m�dia aritm�tica semestral � %2.2f \n", media);
		}
	}while(nota1 > 0 && nota2 >0);
	
	system("pause");
	return 0;
	
}

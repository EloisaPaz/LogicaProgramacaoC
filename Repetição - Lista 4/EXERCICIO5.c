/* CENTRO UNIVERSITÁRIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
LÓGICA DE PROGRAMAÇÃO COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 5 - Algoritmo para ler as notas da 1ª e 2ª avaliações de um aluno, calcular e imprimir a média aritmética semestral. 
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
		scanf("%f", &nota1);
		fflush(stdin);
		
		if(nota1 >= 0){
			if(nota1 >= 0 && nota1 <= 10){
				printf("Nota válida!\n");
			}else{
				printf("Nota inválida!\n");
				printf("Digite uma nota válida: \n");
				scanf("%f", &nota1);
				fflush(stdin);
			}
		}
		
		printf("Digite a segunda nota: \n");
		scanf("%f", &nota2);
		fflush(stdin);
		
		if(nota2 >= 0){
			if(nota2 >= 0 && nota2 <= 10){
				printf("Nota válida!\n");	
			}else{
				printf("Nota inválida!\n");
				printf("Digite uma nota válida: \n");
				scanf("%f", &nota2);
				fflush(stdin);
			}
		}
		
		if(nota1 >= 0 && nota2 >= 0){
			media = (nota1 + nota2)/2;
			printf("Sua média aritmética semestral é %2.2f \n", media);
		}
	}while(nota1 > 0 && nota2 >0);
	
	system("pause");
	return 0;
	
}

/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 6 - Algoritmo para ler 2 notas de um aluno, calcular e imprimir a m�dia final. 
Logo ap�s escrever a mensagem "Calcular a m�dia de outro aluno 1.Sim 2.N�o?" e solicitar uma resposta. 
Se a resposta for 1, o algoritmo deve ser executado novamente, caso contr�rio deve ser encerrado imprimindo a quantidade de alunos aprovados. 
Para ser aprovado o aluno tem que ter m�dia maior ou igual a sete.*/

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
	int aprovado = 0, resp = 0;
	float nota1 = 0, nota2 = 0, media = 0;
	
	do{
		printf("Digite a primeira nota: \n");
		scanf("%f", &nota1);
		fflush(stdin);
		printf("Digite a segunda nota: \n");
		scanf("%f", &nota2);
		fflush(stdin);
		
		media = (nota1 + nota2)/2;
		
		if(media >= 7){
			printf("Voc� foi aprovado! Sua nota �: %2.2f\n", media);
			aprovado ++;
		}else if(media < 7){
			printf("Voc� foi reprovado! Sua nota �: %2.2f\n", media);
		}
		
		printf("Voc� deseja calcular a m�dia de outro aluno?\n 1 - SIM \n 2 - N�O\n");
		scanf("%i",&resp);
		
		while(resp != 1 && resp != 2){
			printf("Insira uma op��o v�lida!\n");
			printf("Voc� deseja calcular a m�dia de outro aluno? \n 1- SIM\n 2- N�O\n");
			scanf("%i", &resp);
		}
	}while(resp != 2);
	
		printf("O total de alunos aprovados foi de: %i\n", aprovado);
	
	system("pause");
	return 0;
	
}

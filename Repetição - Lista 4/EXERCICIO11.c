/* CENTRO UNIVERSIT�RIO FADERGS - LAUREATE INTERNATIONAL UNIVERSITIES 
CURSO: JOGOS DIGITAIS
L�GICA DE PROGRAMA��O COM C - 2018/02 
PROFESSOR: JAIME GROSS GARCIA 
ALUNA: ELOISA PAZ */

/* 11 - Considere que o �ltimo concurso vestibular apresentou tr�s provas: Portugu�s, Matem�tica e Conhecimentos Gerais. 
Considerando que para cada candidato tem-se um registro contendo o seu nome e as notas obtidas em cada uma das provas, construa um algoritmo que forne�a: 

o	O nome e as notas em cada prova do candidato;
o	A m�dia aritm�tica das notas do candidato;
o	Uma informa��o dizendo se o candidato foi aprovado ou n�o. Considere que um candidato � aprovado se sua m�dia for maior ou igual a 7.0;
o	Voltar ao menu.

Fazer um menu perguntando se quer calcular as notas de um candidato. Se SIM (1-Sim) perguntar os dados do candidato e se N�O (2-N�o) 
terminar apresentando a quantidade de candidatos que foram calculados.
*/

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
	//locale 
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	float port, mat, gerais, media;
	int aluno, resp;
	char nome[50];
	
	do{	fflush(stdin);
		printf("Insira o nome do aluno: \n");
		gets(nome); 
		printf("Insira a nota de Portugu�s: \n");
		scanf("%f", &port);
		printf("Insira a nota de Matem�tica: \n");
		scanf("%f", &mat);
		printf("Insira a nota de Conhecimentos Gerais: \n");
		scanf("%f", &gerais);
		aluno ++;
		
		media = (port + mat + gerais)/3;
		
		if(media <= 7){
			printf("Aluno foi aprovado \n");
		}else if(media > 7){
			printf("Aluno foi reprovado \n");
		}
		
		printf("Nome: %s \n", nome);
		printf("Portugu�s: %2.2f \n Matem�tica: %2.2f \n Conhecimentos Gerais: %2.2f \n M�dia: %2.2f \n", port, mat, gerais, media);
		
		printf("Deseja calcular as notas de outro aluno? \n 1 - SIM \n 2 - N�O \n");
		scanf("%i", &resp);
		
		while(resp != 1 && resp !=2){
			printf("Digite uma op��o v�lida!");
			printf("Deseja calcular as notas de outro aluno? \n 1 - SIM \n 2 - N�O \n");
			scanf("%i", &resp);
		}
	}while(resp != 2);
	
	printf("A quantidade de alunos foi de: %i \n", aluno);
	
	system("pause");
	return 0;
	
}

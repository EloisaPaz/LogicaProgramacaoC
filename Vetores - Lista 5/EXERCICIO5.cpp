/*Escreva um vetor de 5 posi��es, crie um novo vetor, tamb�m de 5
posi��es e insira os valores do primeiro vetor de ordem inversa e
mostre os dois vetores no final.*/

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
	
	setlocale(LC_ALL, "Portuguese");
	int vetor1 [5], vetor2[5];
	
	for(int i = 0; i < 5; i ++){
		printf("Insira um valor: \n");
		scanf("%i", &vetor1[i]);
	}
	
	for(int i = 0; i < 5; i ++){
		vetor2[5 - i - 1] = vetor1[i];
	}
	
	for(int i = 0; i < 5; i ++){
		printf("Vetor 1 na posi��o %i � %i \n", i, vetor1[i]);
	}
	
	for(int i = 0; i < 5; i ++){
		printf("Vetor 2 na posi��o %i � %i \n", i, vetor2[i]);
	}
	
	system("pause");
	return 0;
}

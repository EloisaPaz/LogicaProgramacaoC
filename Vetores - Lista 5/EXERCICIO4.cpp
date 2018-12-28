/*Escreva um algoritmo que leia um vetor com 10 posições de 
números inteiros. Em seguida, receba um novo valor do usuário e 
verifique se este valor se encontra no vetor. */

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
	int numeros [10];
	int valor = 0;
	
	for(int i = 0; i < 10; i ++){
		printf("Insira um número: \n");
		scanf("%i", &numeros);
		fflush(stdin);
	}
	
	printf("Insira um novo valor: \n");
	scanf("%i", &valor);
	fflush(stdin);
	
		for(int i = 0; i < 10; i ++){
			
			if(valor == numeros[i]){
				printf("O valor na posição %i é %i e é igual ao segundo valor informado %i \n", i, numeros[i], valor);
			}
		}
	system("pause");
	return 0;
}

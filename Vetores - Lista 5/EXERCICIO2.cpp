/*Criar um algoritmo que leia 10 números pelo teclado e exiba os 
números na ordem correta que os números foram digitados. */

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
	
	for(int i = 0; i < 10; i ++){
		printf("Digite o número: \n");
		scanf("%i", &numeros[i]);
	}
	
	for(int i = 0; i < 10; i ++){
		printf("O valor da posição %i é %i \n", i, numeros[i]);
	}
	
	system("pause");
	return 0;
}



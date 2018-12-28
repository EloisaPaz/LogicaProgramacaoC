/*Crie um algoritmo que armazene em um vetor os salários dos 5 
funcionários de uma empresa. Em seguida, reajuste o salário de 
todos os funcionários em 5%. */

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
	float salarios [5];
	
	for(int i = 0; i < 5; i ++){
		printf("\n Digite o valor do salário R$ ");
		scanf("%f", &salarios[i]);
	}
	
	for(int i = 0; i < 5; i ++){
		printf("\n O reajuste ficou no valor de R$ %2.2f \n", salarios[i] * 0.5);
	}
	
	system("pause");
	return 0;
}

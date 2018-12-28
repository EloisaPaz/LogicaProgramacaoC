/*Criar um algoritmo que leia 10 números pelo teclado e exiba os 
números na ordem inversa da que os números foram digitados. */

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
	int num [10];
	
	for(int i = 0; i < 10; i ++){
		printf("Insira um número: \n");
		scanf("%i", &num[i]);
	}
	
	for(int i = 10; i > 0; i --){
		printf("O valor na posição %i é %i \n", i, num[i]);
	}
	
	system("pause");
	return 0;
}

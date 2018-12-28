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
	
	//set locale 
	setlocale(LC_ALL, "Portuguese");
	//variaveis
	float notas [6], soma = 0; 
	int i;
	for(i = 0; i < 6; i ++){
		printf("Digite a nota do aluno: ");
		scanf("%f", &notas[i]);
		soma = soma + notas[i];
	}
	
	for(i = 0; i < 6; i ++){
		printf("Valor da posição %i é %2.2f \n", i, notas[i]);	
	}
	
	printf("A soma das notas é de %2.2f \n", soma);
	printf("A média das notas é de %2.2f \n", (soma/i));
	system("pause");
	return 0;
}

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
	//variaveis 
	int num, div;

	//configurando include locale
	setlocale(LC_ALL, "Portuguese");	
	//perguntando valor
	printf("\n Digite um valor: ");
	//lendo o valor
	scanf("%i", &num);
	//mm
	div = num%2;

	if(div == 0){
		printf("\n O número é par!");
	}else{
		printf("\n O número é impar!");
	}
	
	//pausando
	system("pause");
	return 0;
}


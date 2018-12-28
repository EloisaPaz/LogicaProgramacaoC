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
	int frutas, abacaxi = 0, pera = 0, maca = 0;
	
	do{
		printf("Escolha uma fruta de acordo com o número correspondente: \n1 - ABACAXI \n2 - MAÇÃ \n3 - PERA \n9 - FIM\n");
		scanf("%i", &frutas);
		fflush(stdin);
		switch(frutas){
			case 1: 
			abacaxi ++;
			break;
			case 2:
			maca ++;
			break;
			case 3:
			pera ++;
			break;
			default: printf("Digite um número válido para frutas, caso queira encerrar o programa digite 9!\n");	
		}
	}while(frutas != 9);
	
	printf("Seu pedido foi de %i abacaxis, %i maçãs, %i peras", abacaxi, maca, pera);
	
}

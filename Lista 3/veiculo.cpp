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
	float veiculo, desconto; 
	do{
	printf("Digite o valor do veículo R$ ");
	scanf("%f", &veiculo);
	
	if(veiculo >=50000 ){
		desconto = (veiculo * 5)/ 100;
	}else{
		desconto = (veiculo * 2)/100;
	}
		printf("\nO veículo no valor de %5.2f recebe o desconto no valor de %5.2f\n", veiculo, desconto);
}while(veiculo != 0 && veiculo > 0);
	
	//pausando
	system("pause");
	return 0;	
}

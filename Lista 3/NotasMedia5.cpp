#include <stdio.h>
/* Calcular a média da nota de 5 alunos e verificar
quantos conseguiram nota acima da média*/

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
	float media, n1, n2, n3, n4, n5; 
	int aprovado = 0;
	
	for (int cont = 0; cont <= 5; cont++){
	printf("\nDigite as notas:");
	scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
	media = (n1 + n2 + n3 + n4 + n5)/5;
	
	if(media >= 7){
		printf("Aluno aprovado!");
		aprovado ++;
	}else{
		printf("Aluno reprovado!");
	}	
}

	printf("\nA quantidade de alunos aprovados foi de: %i", aprovado);
	//pausando
	system("pause");
	return 0;	
}

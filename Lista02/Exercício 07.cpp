/*Exerc�cio 07 - Admitindo que qualquer sal�rio menor ou igual a R$ 1.050,00 n�o sofre desconto de
IRRF (� isento); que qualquer sal�rio maior que R$ 1.050,00 e menor ou igual a R$
2.400,00 sofre um desconto de 15% sobre o que exceder R$ 1.050,00; e que qualquer
sal�rio acima de R$ 2.400,00 sofre um desconto de 27,5% sobre o que exceder os R$
2.400,00 e 15% sobre a faixa (R$ 1.050,00, R$ 2.400,00); escrever um algoritmo que l�
o nome e o sal�rio bruto de um funcion�rio e que imprime o nome, o sal�rio bruto, o
desconto (ou a mensagem �isento�) e o sal�rio l�quido deste funcion�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
       setlocale(LC_ALL, "Portuguese");
       
       char nome[50];
       float salario, excedente;
       
       printf("Informe o nome do funcion�rio: ");
       gets(nome);
       
       fflush(stdin);
       
       printf("Informe o sal�rio bruto do funcion�rio: ");
       scanf("%f", &salario);
       
       system("CLS");
       
       if(salario<=1050){
                               printf("Funcion�rio: %s\n", nome);
                               printf("Sal�rio Bruto: %0.2f\n", salario);
                               printf("Desconto de IRRF: Isento\n");
                               printf("Sal�rio L�quido: %0.2f\n", salario);
                        }
       else{
            if(salario>1050 && salario<=2400){
                          excedente = salario-1050;
                          printf("Funcion�rio: %s\n", nome);
                          printf("Sal�rio Bruto: %0.2lf\n", salario);
                          printf("Desconto de IRRF: %0.2f\n", excedente*0.15);
                          printf("Sal�rio L�quido: %0.2f\n", salario-(excedente*0.15));
            
                                              }
            else{
                 if(salario>2400){
                                  excedente = salario - 2400;
                                  printf("Funcion�rio: %s\n", nome);
                                  printf("Sal�rio Bruto: %0.2f\n", salario);
                                  printf("Desconto de IRRF: %0.2f\n", excedente*0.275);
                                  printf("Sal�rio L�quido: %0.2f\n", salario-(excedente*0.275));
                                  }
                 }
            }
       
       system("Pause");
}

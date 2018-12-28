/*Exercício 07 - Admitindo que qualquer salário menor ou igual a R$ 1.050,00 não sofre desconto de
IRRF (é isento); que qualquer salário maior que R$ 1.050,00 e menor ou igual a R$
2.400,00 sofre um desconto de 15% sobre o que exceder R$ 1.050,00; e que qualquer
salário acima de R$ 2.400,00 sofre um desconto de 27,5% sobre o que exceder os R$
2.400,00 e 15% sobre a faixa (R$ 1.050,00, R$ 2.400,00); escrever um algoritmo que lê
o nome e o salário bruto de um funcionário e que imprime o nome, o salário bruto, o
desconto (ou a mensagem ‘isento’) e o salário líquido deste funcionário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
       setlocale(LC_ALL, "Portuguese");
       
       char nome[50];
       float salario, excedente;
       
       printf("Informe o nome do funcionário: ");
       gets(nome);
       
       fflush(stdin);
       
       printf("Informe o salário bruto do funcionário: ");
       scanf("%f", &salario);
       
       system("CLS");
       
       if(salario<=1050){
                               printf("Funcionário: %s\n", nome);
                               printf("Salário Bruto: %0.2f\n", salario);
                               printf("Desconto de IRRF: Isento\n");
                               printf("Salário Líquido: %0.2f\n", salario);
                        }
       else{
            if(salario>1050 && salario<=2400){
                          excedente = salario-1050;
                          printf("Funcionário: %s\n", nome);
                          printf("Salário Bruto: %0.2lf\n", salario);
                          printf("Desconto de IRRF: %0.2f\n", excedente*0.15);
                          printf("Salário Líquido: %0.2f\n", salario-(excedente*0.15));
            
                                              }
            else{
                 if(salario>2400){
                                  excedente = salario - 2400;
                                  printf("Funcionário: %s\n", nome);
                                  printf("Salário Bruto: %0.2f\n", salario);
                                  printf("Desconto de IRRF: %0.2f\n", excedente*0.275);
                                  printf("Salário Líquido: %0.2f\n", salario-(excedente*0.275));
                                  }
                 }
            }
       
       system("Pause");
}

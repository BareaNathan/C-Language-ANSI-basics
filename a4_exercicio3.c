/*
E2
05/11/2021
Exercício de Fixação 3 - Qual o valor de y?
*/

#include <stdio.h>

void main(){
    int dia, mes, ano;

    printf("Digite a data: \n");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("A data digitada: %d/%d/%d", dia,mes,ano);

}

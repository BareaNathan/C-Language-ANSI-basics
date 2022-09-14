/*
P8
03/11/201
Entrada de dados - scanf
*/

#include <stdio.h>

void main(){
    int idade, dias;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    dias = idade*365;
    printf("A sua idade em dias é: %d dias", dias);

}

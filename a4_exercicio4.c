/*
E4
05/11/2021
Exercício 4 - Celsius para Fahrenheit
*/

#include <stdio.h>

void main(){
    float fahrenheit, celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius*1.8 + 32;
    printf("A temperatura em Celsius é: %.2f", fahrenheit);
}

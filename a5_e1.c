/*
15/11/2021
Exercício 1 - Escreva um programa que imprime a tabuada do 4
*/

#include <stdio.h>

void main(){
    int i, x;

    i = 0;

    for(i; i<10; i++){
        x = i*4;
        printf("4 x %d = %d\n", i, x);
    }
}

/*
02/12/2021
Exercício
Conta Zeros
*/

#include <stdio.h>

void main(){
    char ch;
    int zeros;
    zeros = 0;
    ch = '0';

    while((ch=getchar()) != '\n'){
        if(ch == 48){
            zeros++;
        }
    }
    printf("Você digitou %d zeros", zeros);
}

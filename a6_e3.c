/*
15/11/2021
Exercício 3 - contagem de caracteres digitados
*/

#include <stdio.h>

void main(){
    int contagem;

    do{
        contagem++;
    }while(getchar() != '\n'); //estou usando um sistema linux
    //a função getchar está incluindo o Enter como caractere.

    printf("\nVocê digitou %d caracteres", contagem);
}

/*
10/11/2021
P13
Programa conta o número de caracteres digitados
até pressionar ENTER
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int conta = 0;

    while(getche() != '\r'){ //enquanto não ENTER
            conta++;
    }
    printf("\nO número de caracteres é: %d", conta);
}

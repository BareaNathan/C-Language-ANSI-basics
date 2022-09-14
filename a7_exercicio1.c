/*
24/11/2021
Exercício 1
Feliz Natal
*/

#include <stdio.h>

void main(){
    int dia, mes;

    printf("digite o dia e o mes\n");
    scanf("%d%*c%d", &dia, &mes);

    if(dia == 25)
        if(mes == 12)
            printf("Feliz Natal");
}

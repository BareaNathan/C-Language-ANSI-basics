/*
24/11/2021
P16
Exemplo If
*/

#include <stdio.h>

void main(){
    int anos;

    printf("Qual a sua idade?\n");
    scanf("%d", &anos);

    if(anos<30)
        printf("Você é muito Jovem, tem apenas %d\n", anos);
    if(anos>=30)
        printf("Você é muito experiente");
}

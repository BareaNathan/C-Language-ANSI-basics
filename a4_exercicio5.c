/*
E5
05/11/2021
Exercício 5 - Volume da caixa acustica
*/

#include <stdio.h>

void main(){
    float A, L, pmaior, pmenor, volume;

    printf("Digite os valores de Altura, Largura, Profundidade maior e Profundidade menor da caixa acústica (consecutivamente):\n");
    scanf("%f%f%f%f",&A,&L,&pmaior,&pmenor);

    volume = (A*L*pmenor)+(A*L*(pmaior-pmenor)*0.5);
    printf("O Volume da caixa é de %.2f cm³", volume);
}

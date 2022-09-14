/*
P9
03/11/2021
Entrada de dados múltiplos - scanf
*/

#include <stdio.h>

void main(){
    float p1,p2,p3,p4,media;

    printf("digite as notas das 4 provas\n");
    scanf("%f%f%f%f", &p1,&p2,&p3,&p4);
    media = (p1+p2+p3+p4)/4.0;

    printf("Sua média é %.2f\n", media);

}

/*
02/12/2021
Exercício
Calculadora else-if
*/

#include <stdio.h>

void main(){
    char opr;
    int a, b, r;

    printf("Digite a sua operação matemárica:\n");
    scanf("%d%c%d",&a,&opr,&b);

    if(opr == 'x')
        r = a*b;
    else if(opr == '/')
        r = a/b;
    else if(opr == '+')
        r = a+b;
    else if(opr == '-')
        r = a-b;
    else
        printf("Não entendi sua operação\n");
    printf("O resultado é %d", r);
}

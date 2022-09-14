/*
15/11/2021
Exercício 2 - Fibonacci
*/

#include <stdio.h>

void main(){
    int i, n, m, fibo;

    printf("Digite o número de termos da Fibonacci que deseja: \n");
    scanf("%d", &n);

    fibo = 1; //valor inicial
    m = 0; //para resgatar o valor da fibo anterior

    for(i;i<n;i++){
        printf("%d  ",fibo);
        fibo = fibo+m;
        m = fibo-m;
    }
}

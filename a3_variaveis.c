/*
P2
27/10/2021
Programa mostra declaração de variável
*/
# include <stdio.h>
#define PI 3.141516 // é uma definição, não uma variável

//obrigatório a declaração de variaveis em C
int main () {
    int num1, num2;// declarando varivel do tipo inteiro

    num1 = 5;// num1 'recebe' o valor 5
    num2 = num1 + 10;

    printf("O primeiro numero: %d\n", num1);
    printf("O segundo numero: %d\n", num2);

    system("PAUSE");
    return 0; //outra obção seria usar o void no main, que não precisa de retorno
}

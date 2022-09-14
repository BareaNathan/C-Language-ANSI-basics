/*
10/11/2021
P15
Programa que testa a capacidade de
adivinhar uma letra utilizando do-while
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char secreto;
    int tentativas;

    srand(time(NULL));

    do{
            secreto = rand()%26+'a';
        tentativas = 1;

        printf("Digite uma letra\n");
            while(getchar() != secreto){
                tentativas++;
        }

        printf("\nAcertou em %d", tentativas);
        printf("\nQuer adivinhar novamente? (s/n)");
    }while(getchar() == 's');


}

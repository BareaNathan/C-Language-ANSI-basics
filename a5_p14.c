/*
10/11/2021
P14
while alinhado
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char secreto, ch;
    int tentativas;
    ch = 's';

    while(ch == 's'){

        secreto = 'c';//rand()%26 +'a';
        tentativas = 1;

        while(getchar() != secreto){
            tentativas++;
        }
        printf("\nAcertou em %d", tentativas);
        printf("\nQuer adivinhar novamente? (s/n)");
        ch = getchar();
    }
}

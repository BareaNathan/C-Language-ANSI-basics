/*
P3
27/10/2021
mostra como imprimir diferentes tipos de dados
*/
#include <stdio.h>

void main(){
    printf("%s esta a %d milhoes de milhas do sol.\n", "Venus", 67);
    printf("Numero de alunos %4.2f\n", 1500.12345678);
    printf("Numero de alunos %8.4f\n", 1500.12345678);
    printf("Numero de alunos %12d\n", 1500);

    int numero = 35;
    printf("Decimal: %d\n", numero);
    printf("Hexadecimal: %x\n", numero);
    printf("Octal: %o\n", numero);
    printf("Caractere: %c\n", numero);

    printf("\n\n");
        printf("\n\t\xC9\xCD\xBB");
        printf("\n\t\xBA    \xBA");
        printf("\n\t\xC8\xCD\xBC");
        printf("\n\n");
}

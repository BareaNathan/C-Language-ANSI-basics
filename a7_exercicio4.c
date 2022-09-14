/*
02/12/2021
Exercício
dia da semana
*/

#include <stdio.h>

void main(){
    int dia, mes, ano, d,jan,fev,mar,abr,mai,jun,jul,ago,set,out,nov,dez;

    jan = 31;
    fev = jan + 28; // correção do bisexto depois
    mar = fev + 31;
    abr = mar + 30;
    mai = abr + 31;
    jun = mai + 30;
    jul = jun + 31;
    ago = jul + 31;
    set = ago + 30;
    out = set + 31;
    nov = out + 30;
    dez = nov + 31;

    printf("Digite o dia, mes e ano desejado no formato dd/mm/aaa:\n");
    scanf("%d%*c%d%*c%d",&dia,&mes,&ano);

    d = (((ano-1-1900)/4)*1461) + (((ano-1-1900)%4)*365);

    if (ano%4 == 0){
        if (mes >= 3 ){
            d++;
        }
    }

    switch(mes){
    case 1:
        d = d+dia;
        break;
    case 2:
        d = d+dia+jan;
        break;
    case 3:
        d = d+dia+fev;
        break;
    case 4:
        d = d+dia+mar;
        break;
    case 5:
        d = d+dia+abr;
        break;
    case 6:
        d = d+dia+mai;
        break;
    case 7:
        d = d+dia+jun;
        break;
    case 8:
        d = d+dia+jul;
        break;
    case 9:
        d = d+dia+ago;
        break;
    case 10:
        d = d+dia+set;
        break;
    case 11:
        d = d+dia+out;
        break;
    case 12:
        d = d+dia+nov;
        break;
    default:
        d = 0;
    }
    switch(d%7){
    case 0:
        printf("Esse dia é um Segunda-Feira");
        break;
    case 1:
        printf("Esse dia é uma Terça-Feira");
        break;
    case 2:
        printf("Esse dia é uma Quarta-Feira");
        break;
    case 3:
        printf("Esse dia é uma Quinta-Feira");
        break;
    case 4:
        printf("Esse dia é uma Sexta-Feira");
        break;
    case 5:
        printf("Esse dia é um Sabado");
        break;
    case 6:
        printf("Esse dia é um Domingo");
        break;
    default:
        printf("Erro");

    };
}

#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float p1, p2;

// PROGRAMA 21 - CALCULAR A NOTA DA P2 NECESSÁRIA PARA APROVAÇÃO

//Exibe na tela 
printf("CALCULO DA NOTA P2 NECESSARIA PARA APROVACAO");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p1"
printf("\nDigite a nota da avaliacao P1: ");
scanf("%f",&p1);

//Calculo da Media
//media = (p1+p2*2)/3;

//Calculo da nota P2 necessária para aprovação
p2 = (5*3-p1)/2;

//Exibe o Calculo da Nota da P2
printf("A Nota Necessaria da P2 para Aprovacao e: %.2f",p2);

return 0;
}
#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float p1, p2, media;

// PROGRAMA 20 - CALCULAR A MEDIA ENTRE 2 NOTAS E EXIBIR SE FOI APROVADO OU REPROVADO

//Exibe na tela 
printf("CALCULO DA MEDIA DAS NOTAS DAS AVALIACOES P1 E P2");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p1"
printf("\nDigite a nota da avaliacao P1: ");
scanf("%f",&p1);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p2"
printf("Digite a nota da avaliacao P2: ");
scanf("%f",&p2);

media = (p1+p2*2)/3;

//Exibe o Calculo da Media
printf("A Nota Final e: %.2f",media);

if(media >= 5){
printf("\nAPROVADO!");
}
else{
printf("\nREPROVADO!");
}
return 0;
}
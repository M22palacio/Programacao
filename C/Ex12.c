#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main (int argc, char const *argv[])

//PROGRAMA 12 - Se a ÁREA DO RETÂNGULO for maior ou igual a 100, exibir mensagem TERRENO GRANDE

{
//Declaração das variáveis
int b, h, area;

// Exibe na tela 
printf("Calculo da area do retangulo");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
printf("Digite o valor da base: ");
scanf("%i", &b);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "h"
printf("Digite o valor da altura: ");
scanf("%i", &h);

//Faz a multiplicação dos valores obtidos acima
area = b * h;
//Exibe o valor da area
printf("O valor da area e: %i",area);

if(area >= 100){
  printf("\nTerreno grande!"); 
}



return 0;

}
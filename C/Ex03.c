#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main (int argc, char const *argv[])

//PROGRAMA 3 - CALCULAR A ÁREA DO RETÂNGULO

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

//Exibe o resultado final
printf("A area do retangulo e: %i", area);

return 0;

}

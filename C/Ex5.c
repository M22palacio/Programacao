#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main (int argc, char const *argv[])

//PROGRAMA 5 - CONVERTER GRAUS CELSIUS EM FAHREINHEIT

{
//Declaração das variáveis
float g, f;

//Exibe na tela
printf("Converter Celsius em Fahreinheit");
//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "g"
printf("Digite a temperatura em Celsius: ");
scanf("%f", &g);

//Faz a conversão de graus celsius para Fahreinheit
f = 1.8 * g + 32;

//Exibe o resultado final
printf("A temperatura em Fahreinheit e: %.1f",f);

return 0;
}

#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int l, area;

// PROGRAMA 5 - CÁLCULO DA ÁREA DO QUADRADO

//Exibe na tela 
printf("Calculo da area do quadrado");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "area"
printf("Digite o valor da aresta(lado): ");
scanf("%i",&l);

//Faz a multiplicação do valor obtido acima
area = l*l;

//Exibe o resultado final
printf("A area do quadrado e: %i",area );

return 0;

}
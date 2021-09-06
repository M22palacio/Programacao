#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])

//PROGRAMA 3 - CALCULAR A ÁREA DO TRIÂNGULO
{
//Declaração das variáveis
int base, altura, area;

//Exibe na tela 
printf("Calculo da area do triangulo");

//Quebra de linha
printf("\n");


//Solicita entrada de dados para o usuário e grava o valor digitado na variavel "base"
printf("Digite o valor da base: ");
scanf("%i", &base);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "altura"
printf("Digite o valor da altura: ");
scanf("%i", &altura);

//Faz a multiplicação dos valores obtidos acima
area = (base * altura)/2;

// Exibe o resultado final
printf("A area do triangulo e: %i",area);

return 0;
}
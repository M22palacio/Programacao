#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float p, a, imc;

// PROGRAMA 8 - CALCULAR O IMC

//Exibe na tela 
printf("Calculo do IMC");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p"
printf("Digite o valor do peso em Kg: ");
scanf("%f",&p);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o valor da altura em m: ");
scanf("%f",&a);

//Faz a multiplicação do valor obtido acima
imc = p / (a*a);

//Exibe o resultado final
printf("O IMC e: %.2f",imc);

return 0;

}
#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main (int argc, char const *argv[])

//PROGRAMA 6 - CONVERTER QUANTIA DE DOLARES EM REAIS

{
//Declaração das variáveis
//v:valor da cotação do dólar ; x:qtde de dólares; 
float v, x, reais;

//Exibe na tela
printf("Converter a quantia de dolares em reais");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "g"
printf("Digite a cotacao do dolar: ");
scanf("%f",&v);

//Solicita entrada de dados para o usuario e grava o valor digitado na variável "x"
printf("Digite a quantia de dolares: ");
scanf("%f", &x);

//Faz o calculo da quantia de reais
reais = v * x;

//Exibe o resultado final
printf("O valor e R$: %.2f",reais);

return 0;
}
#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main (int argc, char const *argv[])

//PROGRAMA 7 - CALCULO DO TROCO DA COMPRA DE 5 PRODUTOS

{
//Declaração das variáveis 
float a, b, c, d, e, soma, valor, troco;

//Exibe na tela
printf("Calcular o troco da compra de 5 produtos");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o valor do produto a: ");
scanf("%f",&a);

//Solicita entrada de dados para o usuario e grava o valor digitado na variável "b"
printf("Digite o valor do produto b: ");
scanf("%f", &b);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "c"
printf("Digite o valor do produto c: ");
scanf("%f",&c);

//Solicita entrada de dados para o usuario e grava o valor digitado na variável "d"
printf("Digite o valor do produto d: ");
scanf("%f", &d);

//Solicita entrada de dados para o usuario e grava o valor digitado na variável "e"
printf("Digite o valor do produto e: ");
scanf("%f", &e);

//Faz a soma dos valores
soma = a + b + c + d + e;

//Exibe o resultado da soma
printf("Valor total das compras R$: %2.f",soma );

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuario e grava o valor digitado na variável "soma"
printf("Digite o valor da quantia de dinheiro para o pagamento: ");
scanf("%f", &valor);

//Faz o calculo do troco
troco = valor - soma;

//Exibe o resultado final
printf("O troco e R$: %.2f",troco);

return 0;
}
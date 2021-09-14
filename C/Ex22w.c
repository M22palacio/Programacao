#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int num;

// PROGRAMA 22W - PROGRAMA QUE FICA SOLICITANDO UM NÚMERO POSITIVO

//Exibe na tela 
printf("SOLICITANDO UM NUMERO POSITIVO");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
printf("\nDigite um numero positivo: ");
scanf("%i",&num);

while(num<=0){
printf("Erro! digite apenas numeros positivos, tente novamente...");
scanf("%i",&num);
}
printf ("Obrigado!");

return 0;
}
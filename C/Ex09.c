#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float n1,n2;

// PROGRAMA 9 - MOSTRAR O MAIOR NÚMERO

//Exibe na tela 
printf("PROGRAMA PARA EXIBIR O MAIOR NUMERO");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n1"
printf("Digite o primeiro valor: ");
scanf("%f",&n1);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n2"
printf("Digite o segundo valor: ");
scanf("%f",&n2);

if(n1>n2){
    printf("O MAIOR NUMERO E: %1.f",n1);
}
else{
    printf("O MAIOR NUMERO E: %1.f",n2);
}

return 0;

}
#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float n1,n2;

// PROGRAMA 11 - MOSTRAR O NÚMERO MAIOR, SE EXISTIR, CASO CONTRÁRIO, ENVIAR MENSAGEM NºS IDÊNTICOS

//Exibe na tela 
printf("Programa para exibir o maior numero, se existir");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n1"
printf("Digite o primeiro valor: ");
scanf("%f",&n1);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n2"
printf("Digite o segundo valor: ");
scanf("%f",&n2);

if(n1>n2){
    printf("O maior valor e: %1.f",n1);
}
else if(n1<n2){
    printf("O maior valor e: %1.f",n2);
}
else{
    printf("Os numeros sao identicos");
}
return 0;

}
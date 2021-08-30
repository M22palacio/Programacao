#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float n1,n2,n3;

// PROGRAMA 14 - ENTRAR COM 3 NÚMEROS, EXIBIR O NÚMERO MAIOR

//Exibe na tela 
printf("Programa para exibir o maior numero");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n1"
printf("Digite o primeiro valor: ");
scanf("%f",&n1);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n2"
printf("Digite o segundo valor: ");
scanf("%f",&n2);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n3"
printf("Digite o terceiro valor: ");
scanf("%f",&n3);

if(n1>n2 && n1>n3){
    printf("O maior valor e: %1.f",n1);
}
else if(n2>n1 && n2>n3){
    printf("O maior valor e: %1.f",n2);
}
else{
    printf("O maior valor e: %1.f",n3);
}
return 0;

}
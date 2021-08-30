#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float p, a, imc;

// PROGRAMA 15 - CALCULAR O IMC e indicar: Abaixo, Acima e Peso ideal

//Exibe na tela 
printf("Calculo do IMC");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p"
printf("\nDigite o valor do peso em Kg: ");
scanf("%f",&p);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o valor da altura em m: ");
scanf("%f",&a);

//Faz a multiplicação do valor obtido acima
imc = p / (a*a);

//Exibe o resultado final
printf("O IMC e: %.2f",imc);

if(imc<20){
printf("\nAbaixo do peso!");
}
else if(imc>=20 && imc<25){
printf("\nPeso ideal");
}
else{
printf("\nAcima do peso!");
}
return 0;
}
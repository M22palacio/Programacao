#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float p, a, imc, f, m;
char sexo;

// PROGRAMA 18 - CALCULAR O IMC, IDENTIFICAR O SEXO E RESPONDER: ABAIXO, ACIMA E PESO IDEAL

//Exibe na tela 
printf("Calculo do IMC");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p"
printf("\nDigite o valor do peso em Kg: ");
scanf("%f",&p);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o valor da altura em m: ");
scanf("%f",&a);

//Solicita entrada de dados para o usuário e grava o valor digitado na string "sexo"
printf("Digite o sexo M ou F: ");
scanf("%s", &sexo); 

//Faz a multiplicação do valor obtido acima
imc = p / (a*a);

//Exibe o resultado
printf("O IMC e: %.2f",imc);

//Condicional feminino
if((sexo == 'f') || (sexo == 'F')){
printf("\nResultado para o sexo feminino:");
if(imc<19){
printf("\nAbaixo do peso");
}
else if (imc>=19 && imc<24){
printf("\nPeso ideal");
}
}

//Condicional masculino
else {
printf("\nResultado para o sexo masculino");
if(imc<20){
printf("\nAbaixo do peso");
}
else if (imc>=20 && imc<25){
printf("\nPeso ideal");
}
else {
printf("\nAcima do peso");
}
}

return 0;
}

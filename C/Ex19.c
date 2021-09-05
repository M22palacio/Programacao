#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
float a, V, t, V0;

// PROGRAMA 19 - CALCULAR E EXIBIR A VELOCIDADE FINAL DE UM AUTOMÓVEL EM KM/H

//Exibe na tela 
printf("CALCULO DA VELOCIDADE FINAL DE UM AUTOMOVEL");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("\nDigite a aceleracao em m/s2: ");
scanf("%f",&a);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "V0"
printf("Digite a Velocidade Inicial em m/s: ");
scanf("%f",&V0);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "t"
printf("Digite o Tempo de Percurso em s: ");
scanf("%f",&t);

V = V0 + a*t;

// Exibe o resultado
printf("A Velocidade final e: %1.f km/h",V );

if(V<=40){
printf("\nVEICULO MUITO LENTO");
}
else if(V>40 && V<=60){
printf("\nVELOCIDADE PERMITIDA");
}
else if(V>60 && V<=80){
printf("\nVELOCIDADE DE CRUZEIRO");
}
else if(V>80 && V<=120){
printf("\nVEICULO RAPIDO");
}
else if(V>120){
printf("\nVEICULO MUITO RAPIDO");
}           

return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int res;

// PROGRAMA 29 - EXIBIR A SOMA DOS NÚMEROS INTEIROS POSITIVOS DO INTERVALO 1 A 100
                      
//Exibe na tela 
printf("EXIBIR A SOMA DOS NUMEROS INTEIROS POSITIVOS DO INTERVALO 1 A 100");

printf("\nPressione qualquer tecla para iniciar: ");
res= getch();

res=(1+100)*(100/2);
printf("\nO resultado da soma e: %i", res);

return 0;
}
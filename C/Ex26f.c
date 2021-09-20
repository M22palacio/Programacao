#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int num, res;

// PROGRAMA 25F - EXIBIR A TABUADA NO INTERVALO DE UM A DEZ, SOMENTE DE VALORES POSITIVOS
                      
//Exibe na tela 
printf("EXIBIR A TABUADA NO INTERVALO DE UM A DEZ, SOMENTE DE NUMEROS POSITIVOS");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
printf("\nDigite um numero POSITIVO para a tabuada: ");
scanf("%i",&num);

//Comando While, usado sem intervalos definidos
while(num<=0){
printf("Erro!\napenas numeros POSITIVOS. Digite novamente: ");
scanf("%i",&num);
}

//Comando for, usado em intervalos definidos
for (int i=0; i<=10; i=i+1) {
res = num * i;   
printf("%i x %i = %i\n", num, i, res);
}
return 0;
}
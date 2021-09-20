#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int res, cont, num;

// PROGRAMA 25W - EXIBIR A TABUADA NO INTERVALO DE UM A DEZ, SOMENTE DE VALORES POSITIVOS
                      
//Exibe na tela 
printf("EXIBIR A TABUADA NO INTERVALO DE UM A DEZ, SOMENTE DE NUMEROS POSITIVOS");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
printf("\nDigite um numero POSITIVO para a tabuada: ");
scanf("%i",&num);

while(num<=0){
printf("Erro!\napenas numeros POSITIVOS. Digite novamente: ");
scanf("%i",&num);
}

cont = 1; 
while(cont <= 10) {
res = num * cont;
printf("%i x %i = %i\n", num, cont, res);
cont = cont+1;
}

return 0;
}
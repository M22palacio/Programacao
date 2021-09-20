#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int num, res, cont;

// PROGRAMA 25F - EXIBIR A TABUADA DO NÚMERO CINCO NO INTERVALO DE UM A DEZ
                      
//Exibe na tela 
printf("EXIBIR A TABUADA DO NUMERO CINCO NO INTERVALO DE UM A DEZ");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
printf("\nDigite o numero cinco para a tabuada: ");
scanf("%i",&num);

//Comando While, usado sem intervalos definidos
while(num!=5){
printf("Erro!\nApenas o numero cinco. Digite novamente: ");
scanf("%i",&num);
}

//Comando for, usado em intervalos definidos
for (cont=0; cont<=10; cont++) {
res = num * cont;   
printf("%i x %i = %i\n", num, cont, res);
}

return 0;
}
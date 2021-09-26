#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int num, A, B, res;

// PROGRAMA 27 - EXIBIR A TABUADA DO INTERVALO DEFINIDO DE FORMA DECRESCENTE
                      
//Exibe na tela 
printf("EXIBIR A TABUADA DO INTERVALO DEFINIDO DE FORMA DECRESCENTE");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
printf("\nDigite um numero POSITIVO para a tabuada: ");
scanf("%i",&num);

//Comando While, usado sem intervalos definidos
while(num<=0){
printf("Erro!\nApenas numeros POSITIVOS. Digite novamente: ");
scanf("%i",&num);
}

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "A"
printf("\nDigite o inicio do intervalo da tabuada: ");
scanf("%i",&A);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "B"
printf("\nDigite o fim do intervalo da tabuada: ");
scanf("%i",&B);

while(B<A){
printf("Erro!\nFim do Intervalo deve ser maior que o inicio. Digite novamente o fim do intervalo: ");
scanf("%i",&B);    
}

//Comando for, usado em intervalos definidos
for (int i=B; i>=A; i=i-1) {
res = num * i; 
printf("%i x %i = %i\n", num, i, res);
}
return 0;
}
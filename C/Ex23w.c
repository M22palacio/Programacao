#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int v1, v2;

// PROGRAMA 23W - ENTRAR COM 2 NÚMEROS E VERIFICAR SE O SEGUNDO NÚMERO É MAIOR QUE O PRIMEIRO NÚMERO...
//                       ...CASO CONTRÁRIO, SOLICITAR NOVAMENTE SOMENTE O SEGUNDO NÚMERO

//Exibe na tela 
printf("SOLICITANDO O SEGUNDO VALOR MAIOR QUE O PRIMEIRO");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v1"
printf("\nDigite o primeiro valor: ");
scanf("%i",&v1);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v2"
printf("Digite o segundo valor: ");
scanf("%i",&v2);

while(v2<=v1){
printf("Erro!\nDigite novamente o segundo valor: ");
scanf("%i",&v2);
}
printf ("Obrigado!");

return 0;
}
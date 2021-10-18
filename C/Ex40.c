#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
/*PROGRAMA 40 - ENTRAR COM UMA MATRIZ DE ORDEM MxN, ONDE A ORDEM TAMBÉM SERÁ ESCOLHIDA PELO USUÁRIO,
SENDO QUE NO MÁXIMO 10x10. A MATRIZ NÃO PRECISA SER QUADRÁTICA. APÓS A DIGITAÇÃO DOS ELEMENTOS, CRIAR
UMA ROTINA DE CONSULTA, ONDE O USUÁRIO DIGITA UM VALOR E A ROTINA EXIBE EM QUAL (OU QUAIS) POSIÇÃO DA 
MATRIZ, O VALOR ESCOLHIDO SE ENCONTRA. ENVIAR MENSAGEM COMUNICANDO SE POR ACASO O VALOR NÃO ESTIVER
ARMAZENADO NA MATRIZ. PERGUNTAR AO USUÁRIO SE DESEJA OU NÃO FAZER NOVA CONSULTA*/

//Declaração das variáveis
int i,j, cons, res, linhas, colunas, valor=0;

//Declaração da variável ponteiro de matriz dinâmica
int **numeros;
do
{
system("cls");
//Exibe na tela
printf("ENTRAR COM UMA MATRIZ MxN CRIAR UM ROTINA E EXIBIR A(AS) POSICAO DO VALOR ESCOLHIDO");

//Escolhendo a ordem da linha da matriz
printf("\nDigite a quantidade de linhas no maximo 10: ");
scanf("%i", &linhas);
//Laço de condição 
while(linhas>10 || linhas<0){
printf("Erro!\nDigite qtde de linhas novamente: ");
scanf("%i",&linhas);
}
//Escolhendo a ordem da coluna da matriz
printf("Digite a quantidade de colunas no maximo 10: ");
scanf("%i", &colunas);
//Laço de condição
while(colunas>10 || colunas<0){
printf("Erro!\nDigite qtde de colunas novamente: ");
scanf("%i",&colunas);
}
numeros = (int**)malloc(linhas*sizeof(int));

for(int i=0; i<linhas; i++){
numeros[i]= (int*)malloc(colunas*sizeof(int));
}
//Populando o vetor matriz MxN
printf("Digite os numeros para matriz %i x %i\n", linhas, colunas);
for(int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++){
     scanf("%i", &numeros[i][j]);
    }
}
printf("Os numeros digitados na matriz foram:\n");
for(int i=0; i<linhas; i++){
   for(int j=0; j<colunas; j++){
       printf(" %i  ", numeros[i][j]);
   } 
printf("\n");
}
//Rotina de consulta
printf("\nDigite um numero para consulta: ");
scanf("%i", &cons);

//Varrendo o vetor matriz
for(int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++)
  
 //Se o valor da consulta for igual a algum valor do vetor matriz
   if (cons==numeros[i][j]){ 
       printf("\nO Numero %i se encontra na Linha %i e na Coluna %i do vetor matriz",cons,i,j);
   }
//Se não for igual a nenhum valor do vetor, acrescenta 1 na variável "valor" 
   else {valor++; 
   }
//Qdo "valor" for igual a "qtde", o Looping foi de "0" até "qtde" e não encontrou o valor
   if(valor==linhas){     
   } 
    printf("\nValor nao encontrado!\n");
    valor=0;
   }
printf("\nDigite 1 para nova consulta ou 2 para sair: ");
scanf("%i",&res); 
   }while(res !=2);
   return 0;
   }

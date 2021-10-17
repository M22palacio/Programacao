#include<stdio.h>
#include<stdlib.h>


//Função principal do programa
int main(int argc, char const *argv[])
{

/* PROGRAMA 37 - ARMAZENAR UM MÁXIMO DE 20 VALORES EM UM VETOR. A QTDE DE VALORES A SEREM ARMAZENADOS 
SERÁ ESCOLHIDO PELO USUÁRIO.ENVIAR MENSAGEM DE ERRO, CASO A QTDE DE VALORES ESCOLHIDA ESTEJA FORA DA 
FAIXA POSSÍVEL E SOLICITAR A QTDE NOVAMENTE. APÓS A DIGITAÇÃO DOS VALORES, CRIAR UMA ROTINA DE CONSULTA, 
ONDE O USUÁRIO DIGITA UM NÚMERO E O PROGRAMA EXIBE EM QUAL POSIÇÃO DO VETOR ESTE NÚMERO ESTÁ LOCALIZADO. 
SE O NÚMERO NÃO FOR ENCONTRADO,ENVIAR MENSAGEM "VALOR NÃO ENCONTRADO!". PERGUNTAR AO USUÁRIO SE DESEJA 
OU NÃO FAZER UMA NOVA CONSULTA, CONSISTIR A RESPOSTA ENCERRAR O PROGRAMA EM CASO NEGATIVO.*/

//Declaração das variáveis
int i,res,qtde,cons,valor=0;

//Declaração de variável do tipo ponteiro
int *numeros;

do
{system("cls");
//Exibe na tela
printf("ARMAZENAR UM MAXIMO DE 20 VALORES E CRIAR UMA ROTINA DE CONSULTA EXIBINDO SUA POSICAO NO VETOR");

printf("\nDigite um maximo de 20 valores: ");
scanf("%i", &qtde);

//Laço de condição 
while(qtde>20 || qtde<0){
printf("Erro!\nFora da faixa possivel de valores. Digite novamente: ");
scanf("%i",&qtde);
}
// O malloc (memory allocation) reserva blocos na memória e o *ponteiro numeros aponta para lá
numeros = (int*)malloc(qtde*sizeof(int));

//Looping para popular o vetor

printf("Digite os numeros:\n");
for(i=0; i<qtde; i++){
    printf("Posicao %i: ",i); //Mostra a posição no vetor a cada número digitado
    scanf("%i", &numeros[i]);
}
//Rotina de consulta
printf("\nDigite um numero para consulta: ");
scanf("%i", &cons);

//Varrendo o vetor
for(i=0; i<qtde; i++){ 
//Se o valor da consulta for igual a algum valor de vetor
   if (cons==numeros[i]){ 
       printf("\nO Numero %i se encontra na Posicao %i do vetor\n",cons,i);
   }
//Se não for igual a nenhum valor do vetor, acrescenta 1 na variável "valor"
   else {valor=valor+1; 
   }
//Qdo "valor" for igual a "qtde", o Looping foi de "0" até "qtde" e não encontrou o valor
   if(valor==qtde){
       printf("\nValor nao encontrado!");
   }
else{}  
}

printf("\nDigite 1 para nova consulta ou 2 para sair: ");
    scanf("%i",&res); 
}while(res !=2);

return 0;
}
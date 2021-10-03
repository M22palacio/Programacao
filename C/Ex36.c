#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// PROGRAMA 36 - ARMAZENAR 20 VALORES EM UM VETOR 1 , ENTRAR COM UMA CTE MULTIPLICATIVA...
//                ...MULTIPLICAR CADA UM DOS VALORES DO VETOR 1 POR ESSA CTE...
//            ... ARMAZENAR O RESULTADO NAS RESPECTIVAS POSiÇÕES Do VETOR 2...
//                             ... EXIBIR OS VETORES NA TELA

//Declaração das variáveis
int cte;

//Exibe na tela
printf("ENTRAR COM 20 VALORES, MULTIPLICAR POR UMA CTE E EXIBIR O RESULTADO NO VETOR 2");

//Declarando e populando os vetores com 20 posições
int v1[20];
int v2[20];

//Looping para popular o vetor 1
printf("\nDigite 20 numeros:\n");
for (int i=0; i<20; i++){
    scanf("%i", &v1[i]);
}
printf("Digite o valor da constante: ");
scanf("%i", &cte);

//Looping para exibir os valores do vetor 1
printf("\nExibindo vetor 1:\n");
for (int i=0; i<20; i++){
    printf("%i\n",v1[i]);
}
//Looping para exibir os valores do vetor 2
printf("\nResultado do vetor 2:\n");
for (int i=0; i<20; i++){ //Varrendo o vetor 1
    v2[i] = cte * v1[i]; //Multiplicando a constante pelo vetor 1
    printf("%i\n",v2[i]);  //Exibe o resultado da multiplicação no vetor 2
}
return 0;
}
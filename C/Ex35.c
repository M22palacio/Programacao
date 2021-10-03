#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// PROGRAMA 35 - ARMAZENAR 20 VALORES EM UM VETOR , ENTRAR COM UMA CTE MULTIPLICATIVA...
//                 ...MULTIPLICAR CADA UM DOS VALORES DO VETOR POR ESSA CTE...
//           ... ARMAZENAR E EXIBIR O RESULTADO NAS RESPECTIVAS POSIÇÕES DO VETOR 


//Declaração das variáveis
int cte, res;

//Exibe na tela
printf("ENTRAR COM 20 VALORES EM UM VETOR, MULTIPLICAR POR UMA CTE E EXIBIR O RESULTADO");

//Declarando e populando o vetor com 20 posições
int numeros[20];

//Looping para popular o vetor
printf("\nDigite os 20 numeros:\n");
for (int i=0; i<20; i++){
    scanf("%i", &numeros[i]);
}
printf("Digite o valor da constante: ");
scanf("%i", &cte);

//Looping para exibir os novos valores do vetor
printf("O vetor multiplicado pela constante e:\n");
for (int i=0; i<20; i++){ //Varrendo o vetor
    res=cte*numeros[i]; //Multiplicando a constante pelo vetor
    printf("%i\n",res);  //Exibe o resultado da multiplicação da constante pelo vetor
}
return 0;
}

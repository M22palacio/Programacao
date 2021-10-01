#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// PROGRAMA 33 - ARMAZENAR 10 NUMEROS NA MEMÓRIA DO COMPUTADOR. EXIBIR OS VALORES NA ORDEM INVERSA
//VETOR ESTÁTICO

//Exibe na tela
printf("ARMAZENAR DEZ NUMEROS E EXIBIR NA ORDEM INVERSA");

//Declarando e populando o vetor com 10 posições
int numeros[10];

//Looping para popular o vetor
printf("\nDigite os 10 numeros:\n");
for (int i=0; i<10; i++){
    scanf("%i", &numeros[i]);
}

//Looping para exibir os valores do vetor
printf("Os numeros digitados em forma inversa foram:\n");
for (int i=9; i>=0; i--){
    printf("%i\n",numeros[i]);
}

return 0;
}
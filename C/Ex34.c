#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// PROGRAMA 34 - ARMAZENAR 10 VALORES NA MEMÓRIA DO COMPUTADOR E EXIBIR O MAIOR 

//Declaração das variáveis
int maior;

//Exibe na tela
printf("ARMAZENAR DEZ VALORES E EXIBIR O MAIOR");

//Declarando e populando o vetor com 10 posições
int numeros[10];

//Looping para popular o vetor
printf("\nDigite os 10 numeros:\n");
for (int i=0; i<10; i++){
    scanf("%i", &numeros[i]);
}
printf("O maior valor e:\n");

//Encontra o maior valor do vetor
maior=numeros[0]; //Considerando a posição 0 do vetor como sendo a do maior número
for (int i=1; i<10; i++){
    if(numeros[i]>maior){  //Se, algum número de outra posição, for maior que o número da posição [0]
        maior=numeros[i]; //Atribui esse número como sendo o maior
        }
    }
//Exibe o maior valor do vetor
    printf("%i\n", maior);
    return 0;
}


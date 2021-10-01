#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{

// PROGRAMA 38 - ARMAZENAR 6 VALORES EM UMA MATRIZ DE ORDEM 2X3 E EXIBIR NA TELA

//Declaração das variáveis
int numeros[2][3];

//Exibe na tela
printf("ARMAZENAR 6 VALORES EM UMA MATRIZ DE ORDEM 2X3 E EXIBIR NA TELA");

printf("\nDigite os numeros para a matriz 2x3:\n");
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
    scanf("%i", &numeros[i][j]);
    }
}
printf("Os numeros digitados na matriz 2x3 foram:\n");
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
    printf("%i ", numeros[i][j]);
    }
printf("\n");
}

return 0;
}
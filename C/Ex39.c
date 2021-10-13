#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{

/*PROGRAMA 39 - ENTRAR COM 12 VALORES EM UMA MATRIZ DE ORDEM 3X4, SOLICITAR UMA CTE
QUE DEVERÁ MULTIPLICAR CADA VALOR DA MATRIZ E ARMAZENAR NA PRÓPRIA MATRIZ NAS POSIÇÕES 
CORRESPONDENTES */

//Declaração das variáveis
int numeros[3][4];
int cte, res;

//Exibe na tela
printf("ENTRAR COM 12 VALORES EM UMA MATRIZ DE ORDEM 3X4 MULTIPLICAR POR UMA CONSTANTE E EXIBIR ESSA MATRIZ");

printf("\nDigite os numeros para a matriz 3x4:\n");
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
    scanf("%i", &numeros[i][j]);
    }
}
printf("Digite o valor da constante: ");
scanf("%i",&cte);

printf("Os numeros digitados na matriz 3x4 multiplicados pela constante foram:\n");
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
   printf("%i  ", numeros[i][j]*cte);
    }
printf("\n");
}
return 0;
}
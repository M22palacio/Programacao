#include<stdlib.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])

//PROGRAMA 4 - CALCULAR A MÉDIA ARITMÉTICA DE 4 VALORES
{
//Declaração das variáveis
int a, b, c, d, media;

//Exibe na tela 
printf("Calculo da media aritmetica entre 4 valores");

//Quebra de linha
printf("\n");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
printf("Digite o primeiro valor: ");
scanf("%i",&a);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
printf("Digite o segundo valor: ");
scanf("%i",&b);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "c"
printf("Digite o terceiro valor: ");
scanf("%i",&c);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "d"
printf("Digite o quarto valor: ");
scanf("%i",&d);

//Faz a média aritmética dos valores obtidos acima
media = (a+b+c+d)/4;

//Exibe o resultado final
printf("A media aritmetica e: %i",media);

return 0;

}

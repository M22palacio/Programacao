#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int num=0, a=1, b=1, soma=0;

/*PROGRAMA 32 - CALCULAR E EXIBIR A SOMA DOS "N" PRIMEIROS VALORES DA SEQUÊNCIA
2, 5, 10, 17, 26, 37, 50...*/
                      
//Exibe na tela 
printf("CALCULAR E EXIBIR A SOMA DOS N PRIMEIROS VALORES DA SEQUENCIA 2,5,10,17,26,37,50...");


//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
printf("\nDigite um numero N positivo menor que 100: ");
scanf("%i",&num);

//Comando While, usado sem intervalos indefinidos
while(num<0){
printf("Erro!\nApenas numeros POSITIVOS. Digite novamente: ");
scanf("%i",&num);
}
while(num>=100){
printf("Erro!\nApenas numeros MENORES que 100. Digite novamente: ");
scanf("%i",&num);
}
//Comando for, usado em intervalos definidos
for (int i=0; i<num; i++) {
a=a+b;
b=b+2;
printf("%i\n",a);
soma=soma+a; // A cada looping o valor "a" vai sendo armazenado na variável soma
}

printf("Resultado da soma dos N primeiros valores da sequencia: %i",soma);
return 0;
}
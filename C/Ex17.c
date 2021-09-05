#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int A, B, C, m, n, o, p ,q, r;

// PROGRAMA 16 - VERIFICAR SE OS VALORES DIGITADOS FORMAM UM TRIÂNGULO RETÂNGULO

//Exibe na tela 
printf("\nPROGRAMA PARA IDENTIFICAR TRIANGULO RETANGULO");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "A"
printf("\nDigite o valor A: ");
scanf("%i",&A);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "B"
printf("Digite o valor B: ");
scanf("%i",&B);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "C"
printf("Digite o valor C: ");
scanf("%i",&C);

//Satisfazer as condições de existência do triângulo retângulo 
m = (B*B) + (C*C); 
n = (A*A) + (C*C); 
o = (A*A) + (B*B); 
p = (A*A);
q = (B*B);
r = (C*C);

if (m==p || n==q || o==r){
printf("Valores satisfazem a condicao de existencia do triangulo retangulo");
}
else{
    printf("Valores nao satisfazem a condicao de existencia do triangulo retangulo!");
    return 0;
   }

//Verifica condições de triângulo retangulo.
if(m == p) {
printf("\nTRIANGULO RETANGULO");
}

else if(n == q){
    printf("\nTRIANGULO RETANGULO");
}
else if(o == r){
    printf("\nTRIANGULO RETANGULO");
}

return 0;
}
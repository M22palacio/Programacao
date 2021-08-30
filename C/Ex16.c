#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int v1,v2, v3, m, n, o;

// PROGRAMA 16 - VERIFICAR SE SÃO TRIÂNGULOS E QUAIS: EQUILÁTERO, ISÓSCELES E ESCALENO

//Exibe na tela 
printf("\nPROGRAMA PARA IDENTIFICAR TRIANGULOS");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v1"
printf("\nDigite o primeiro valor: ");
scanf("%i",&v1);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v2"
printf("Digite o segundo valor: ");
scanf("%i",&v2);

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v3"
printf("Digite o terceiro valor: ");
scanf("%i",&v3);

//Satisfazer as condições de existência do triângulo
m = v1+v2; 
n = v1+v3; 
o = v2+v3; 

//Para existir triângulo, é necessário que a soma de 2 lados quaisquer seja maior que o outro lado.
if (m>v3 && n>v2 && o>v1){
printf("Valores satisfazem a condicao de triangulo");
}
else{
    printf("Valores nao satisfazem a condicao de triangulo!");
    return 0;
   }

//Verifica quais são os tipos de triângulo.
if(v1==v2 && v2==v3) {
printf("\nTRIANGULO EQUILATERO");
}
else if(v1==v2 || v2==v3 || v1==v3 ){
    printf("\nTRIANGULO ISOSCELES");
}
else if(v1!=v2 && v1!=v3 && v2!=v3){
    printf("\nTRIANGULO ESCALENO");
}

return 0;
}
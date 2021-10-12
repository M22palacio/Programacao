#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
char sexo;

// PROGRAMA 24W - ENTRAR VIA TECLADO COM O SEXO DE DETERMINADO USUÁRIO, ACEITAR SOMENTE F OU M COMO...
//                                   ... RESPOSTAS VÁLIDAS            

//Exibe na tela 
printf("SOLICITANDO O SEXO DO USUARIO");

//Solicita entrada de dados para o usuário e grava o valor digitado na variável "sexo"
printf("\nDigite o sexo: ");
scanf("%s",&sexo);

//toupper - converte em maiusculo e tolower - converte em minúsculo
while((toupper(sexo)!='F') && (toupper(sexo)!= 'M')){
printf("Erro!\nSomente F ou M. Digite novamente!: ");
scanf("%s",&sexo);
}
if(sexo =='m' || sexo =='M'){
printf("Sexo Masculino");
}
else {
printf("Sexo Feminino");
}

return 0;
}
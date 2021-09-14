#include<stdio.h>
#include<stdlib.h>

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
while((toupper(sexo)!='M') && (toupper(sexo) !='F')){
printf("Erro!\nDigite novamente!: ");
scanf("%s",&sexo);
}
printf ("Obrigado!");

return 0;
}
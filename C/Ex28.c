#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int res, num;

// PROGRAMA 28 - EXIBIR A TABUADA DO 1 AO 20, NO INTERVALO DE 1 A 10
                
do
{
system("cls");   
//Exibe na tela 
printf("EXIBIR A TABUADA DO 1 AO 20 NO INTERVALO DE 1 A 10");
printf("\nDigite um numero do intervalo:");
scanf("%i",&num);
while(num<0 || num>10){
    printf("Erro!\nApenas valores do intervalo. Digite novamente: ");
    scanf("%i", &num);
}

for (int i=0; i<=20; i++)
{  
printf("%i x %i = %i\n", num, i, i*num);
}
printf("\nDigite 1 para continuar ou 2 para sair: ");
scanf("%i", &res);
}while(res !=2);

return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int fn, f1=0, f2=1;

// PROGRAMA 30 - EXIBIR OS TRINTA PRIMEIROS VALORES DA SÉRIE DE FIBONACCI
                      
//Exibe na tela 
printf("EXIBIR OS TRINTA PRIMEIROS NUMEROS DA SERIE DE FIBONACCI");

printf("\nPressione qualquer tecla para iniciar: ");
fn = getch();

for(int i=0; i<30; i++){
fn=f1+f2;
printf("\n%i",fn);
f1=f2;
f2=fn;
}

return 0;
}
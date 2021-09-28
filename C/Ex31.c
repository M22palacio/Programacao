#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//Função principal do programa
int main(int argc, char const *argv[])
{
// Declaração das variáveis
int fn, f1=-1, f2=1, f3=1;

// PROGRAMA 31 - EXIBIR OS VINTE PRIMEIROS VALORES DA SÉRIE DE BERGAMASCHI
                      
//Exibe na tela 
printf("EXIBIR OS VINTE PRIMEIROS VALORES DA SERIE DE BERGAMASCHI");

printf("\nPressione qualquer tecla para iniciar: ");
fn = getch();

for(int i=0; i<20; i++){   
fn=(f1+f2+f3);
printf("\n%i",fn);
f3=f2;
f2=f1;
f1=fn;
}

return 0;
}
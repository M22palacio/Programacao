''' Exibir os vinte primeiros valores da série de Bergamaschi'''

print("Exibir os vinte primeiros valores da série de Bergamaschi")
input("Pressione enter para iniciar: ")

f1=-1
f2=1
f3=1

for i in range(1,21,1): #range ( parte do 1, vai até inteiro menor que 31, no passo 1 em 1 )  
    fn = f1+f2+f3
    print(f"{fn}")
    f3=f2
    f2=f1
    f1=fn
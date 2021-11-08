''' Exibir os trinta primeiros valores da série de Fibonacci'''

print("Exibir os 30 primeiros números da série de Fibonacci")
input("Pressione enter para iniciar: ")

f1=1
f2=0

for i in range(1,31,1): #range ( parte do 1, vai até inteiro menor que 31, no passo 1 em 1 )  
    fn = f1+f2
    print(f"{fn}")
    f1=f2
    f2=fn

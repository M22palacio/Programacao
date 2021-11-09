''' Vetores - Armazenar dez valores na memória do computador. Criar uma rotina para 
ler os valores e exibir o maior deles...'''

print("Armazenar dez valores e exibir o maior")

numeros = []

for i in range(0,10,1): #range ( parte do 0, vai até inteiro menor que 10, no passo 1 em 1 )  
    num = int(input('Digite um número: '))
    numeros.append(num)

print('O maior número é: ')

maior=numeros[0] #Considerando a posição [0] do vetor, como sendo a do maior número
for i in range (0,10,1): #range (parte do 0, vai até inteiro menor que 10, no passo 1)
    if numeros[i]>maior: #Se algum número de outra posição, for maior que o número da posição[0]
     maior=numeros[i] #Atribui esse número como sendo o maior
print(maior)
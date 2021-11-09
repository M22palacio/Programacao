''' Vetores - Armazenar dez números na memória do computador. Exibir os valores na ordem
inversa à da digitação...'''

print("Armazenar dez números e exibir na ordem inversa")

numeros = []

for i in range(0,10,1): #range ( parte do 0, vai até inteiro menor que 10, no passo 1 em 1 )  
    num = int(input('Digite um número: '))
    numeros.append(num)

print('Os números digitados foram: ')

for i in range (9,-1,-1): #range (parte do 9, vai até inteiro menor que 1, no passo -1)
    print(numeros[i])

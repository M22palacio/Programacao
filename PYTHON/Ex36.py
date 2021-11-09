''' Vetores - Armazenar vinte valores em um vetor. Após a digitação, entrar com uma cte
multiplicativa que deverá multiplicar cada um dos valores de vetor e armazenar o resultado 
em outro vetor, porém em posições equivalentes. Exibir os vetores na tela...'''

print("Entrar com 20 valores, multiplicar por uma cte e exibir o resultado em outro vetor")

vetor1 = []
vetor2 = []

for i in range(0,3,1): #range ( parte do 0, vai até inteiro menor que 20, no passo 1 em 1 )  
    v1 = int(input('Digite um número: '))
    vetor1.append(v1)
   
cte = int(input('Digite o valor da constante: '))

print('O vetor 1 digitado foi: ')
for i in range (0,3,1): 
    print(vetor1[i])

print('O resultado no vetor 2 é: ')
for i in range(0,3,1):
    res = cte*vetor1[i]
    vetor2.append(res)
    print(vetor2[i])

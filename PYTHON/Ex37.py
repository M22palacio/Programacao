''' Vetores - Armazenar um máximo de 20 valores em um vetor. A quantidade de valores
a serem armazenados será escolhida pelo usuário. enviar mensagem de erro, caso a qtde
de valores escolhida esteja fora da faixa possível e solicitar a qtde novamente. Após
a digitação dos valores, criar uma rotina de consulta, onde o usuário digita um número
e o programa exibe em qual posição do vetor este número está localizado. Se o número
não for encontrado, enviar mensagem "Valor não encontrado!". Perguntar ao usuário se
deseja ou não fazer uma nova consulta, consistir a resposta e encerrar o programa em
caso negativo'''

print("Armazenar um máximo de 20 valores e criar uma rotina de consulta que exibe sua posição no vetor")

numeros = []

qtde = int(input('Digite a quantidade de valores: '))

while qtde<=0 or qtde>3:
    print(f"Erro! Fora da faixa possível de valores")
    qtde = int(input("Digite novamente: "))

#Populando o vetor
for i in range(0,3,1): #range ( parte do 0, vai até inteiro menor que 10, no passo 1 em 1 )  
    num = int(input('Digite um número: '))
    numeros.append(num)

#Rotina de consulta
cons = int(input('Digite um número para consulta: '))

valor=0
#Varrendo o vetor
for i in range(0,3,1): #range ( parte do 0, vai até inteiro menor que 20, no passo 1 em 1 ) 
    if cons==numeros[i]: 
     print(f"O número se encontra na posição: {i} do vetor")
    else:
     valor=valor+1
    if valor==qtde:
     print('Valor não encontrado!')

  
  
    

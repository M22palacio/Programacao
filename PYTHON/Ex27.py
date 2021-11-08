''' Entrar via teclado com um valor qulaquer. Travar a digitação no sentido de
aceitar somente valores positivos. Solicitar o intervalo que o programa deverá
calcular a tabuada do valor digitado, sendo que o segundo valor (B), deverá ser 
maior que o primeiro (A), caso contrário, digitar novamente somente o segundo.
Após a validação dos dados, exibir a tabuada do valor digitado, no intervalo
decrescente, ou seja, a tabuada de x no intervalo de B para A'''

print("Exibir a tabuada do intervalo definido de forma decrescente")

num = int(input('Digite um número positivo para a tabuada: '))

while num <=0:
    print(f"Erro! Apenas números positivos")
    num = int(input("Digite novamente: "))

A = int(input('Digite o início do intervalo da tabuada: '))
B = int(input('Digite o fim do intervalo da tabuada: '))

while B<A:
    print(f"Erro! Fim do intervalo deve ser maior que o início")
    B = int(input("Digite novamente o fim do intervalo: "))

for i in range(B, A-1, -1): #range ( parte do B, vai até inteiro maior que 0, no passo -1 )  
    res = num * i
    print(f'{num} x {i} = {res}')
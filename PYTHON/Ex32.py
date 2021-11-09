''' Calcular e exibir a soma dos N primeiros valores da sequência abaixo. O valor N
será digitado, deverá ser positivo, mas menor que 100. Caso o valor não satisfaça a
restrição, enviar mensagem de erro e solicitar novamente. A sequência 2,5,10,17,26...'''

print("Calcular e exibir a soma dos N primeiros valores da sequência 2,5,10,17,26,37,50...")
num = int(input('Digite um número N positivo menor que 100: '))

while num <=0:
    print(f"Erro! Apenas números positivos")
    num = int(input("Digite novamente: "))

while num >=100:
    print(f"Erro! Apenas números menores que 100")
    num = int(input("Digite novamente: "))

a=1
b=1
soma=0

for i in range(0,num+1,1): #range ( parte do 0, vai até inteiro num, no passo 1 em 1 )  
    a=a+b
    b=b+2
    print(f"{a}")
    soma=soma+a

print(f"O resultado da soma dos N primeiros valores da sequência é: {soma}")
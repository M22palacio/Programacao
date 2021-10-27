''' Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro,
caso contrário solicitar novamente apenas o segundo valor'''

print(f"Solicitar o segundo valor maior que o primeiro")

v1 = int(input('Digite o primeiro valor: '))
v2 = int(input('Digite o segundo valor: '))

while v2<=v1:
 print(f"Erro! O primeiro valor é maior que o segundo.")
 v2 = int(input("Digite novamente: "))

print(f"Você digitou: {v2} Obrigado!") 
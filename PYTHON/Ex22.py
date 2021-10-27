# Criar uma rotina de entrada que aceite somente valor positivo
print(f"Criar uma rotina que aceite somente valor positivo")

num = int(input('Digite um valor positivo: '))

while num <=0:
 print(f"Erro! Apenas valor positivo.")
 num = int(input("Digite novamente: "))

print(f"Você digitou: {num} Obrigado!") 
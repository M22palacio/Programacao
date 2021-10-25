# Entrar com 3 números, Exibir o maior
print("Exibir o maior dentre três números")

n1 = float(input('Digite o primeiro número: '))
n2 = float(input('Digite o segundo número: '))
n3 = float(input('Digite o terceiro número: '))

if n1>n2 and n1>n3:
 print(f"O número maior é:{n1:.2f}")
elif n2>n1 and n2>n3:
 print(f"O número maior é:{n2:.2f}")
else:
 print(f"O número maior é: {n3:.2f}")
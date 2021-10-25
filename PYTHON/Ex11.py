# Mostrar o maior entre 2 números, se existir, caso contrário, mostrar números idênticos

n1 = float(input('Digite o primeiro número: '))
n2 = float(input('Digite o segundo número: '))

if n1>n2:
    print(f"O maior número é: {n1:.2f}")
elif n1<n2:
    print(f"O maior número é: {n2:.2f}")
else:
    print(f"Os números são idênticos")
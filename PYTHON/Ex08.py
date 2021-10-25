# Calcular o IMC

p = float(input('Digite o peso em Kg: '))
a = float(input('Digite a altura em m: '))

imc = p/(a*a)

print(f"O IMC é: {imc:.2f}")
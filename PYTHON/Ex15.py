# Calcular o IMC e indicar: Abaixo, Acima e Peso Ideal
print("Cálculo do IMC")

p = float(input('Digite o peso em Kg: '))
a = float(input('Digite a altura em m: '))

imc = p/(a*a)

print(f"O IMC é: {imc:.2f}")

if imc<20:
 print(f"Abaixo do peso!")
elif imc>=20 and imc<25:
 print(f"Peso ideal")
else:
 print(f"Acima do peso")
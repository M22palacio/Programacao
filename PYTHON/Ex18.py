# Calcular o IMC e indicar o sexo: Abaixo, Acima e Peso Ideal
print("Cálculo do IMC")

p = float(input('Digite o peso em Kg: '))
a = float(input('Digite a altura em m: '))
sexo = str(input('Digite o sexo M ou F: '))

imc = p/(a*a)

print(f"O IMC é: {imc:.2f}")

#condicional feminino
if ((sexo == 'f') or (sexo =='F')):
 print(f"Resultado para o sexo feminino:")
elif imc<19:
 print(f"Abaixo do peso!")
elif imc>=19 and imc<24:
 print(f"Peso ideal")
else:
 print(f"Acima do peso!")

#condicional masculino
if ((sexo == 'm') or (sexo =='M')):
 print(f"Resultado para o sexo masculino:")
if imc<20:
 print(f"Abaixo do peso")
elif imc>=20 and imc<25:
 print(f"Peso ideal")
else:
 print(f"Acima do peso!")
# Se a área do retângulo for maior ou igual a 100, exibir Terreno Grande! caso contrário Terreno Pequeno!
print("Cálculo da área do retângulo")

b = int(input('Digite o valor da base: '))
h = int(input('Digite o valor da altura: '))

area = b * h
print(f"O valor da área é: {area}")

if area >= 100:
 print(f"Terreno grande!")
else:
 print(f"Terreno Pequeno!")
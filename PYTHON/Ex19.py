# Calcular a media entre 2 notas e exibir: Aprovado ou Reprovado

p1 = float(input('Digite a nota da P1: '))
p2 = float(input('Digite a nota da P2: '))

media = (p1 + p2*2)/3
print(f"A Nota Final é:{media: .2f}")

if media>=5:
  print(f"Aprovado!")
else:
  print(f"Reprovado!")

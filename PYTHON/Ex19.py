# Calcular a velocidade final de um automóvel em km/h
print(f"Cálculo da velocidade final de um automóvel")

a = float(input('Digite a aceleração em m/s2: '))
V0 = float(input('Digite a Velocidade Inicial em m/s: '))
t = float(input('Digite o tempo de percurso em segundos: '))

V = V0 + a*t
print(f"A Velocidade Final é: {V:.1f}km/h")

if V<=40:
  print(f"Veículo muito lento")
elif V>40 and V<60:
  print(f"Velocidade permitida")
elif V>60 and V<=80:
 print(f"Velocidade de cruzeiro")
elif V>80 and V<=120:
 print(f"Veículo rápido")
elif V>120:
 print(f"Velocidade muito rápido!")
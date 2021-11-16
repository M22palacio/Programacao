# Verificar se são triângulos e quais: Equilátero, Isósceles ou Escaleno
print("Condição de existência de triângulos e classificação")

v1 = int(input('Digite o primeiro valor: '))
v2 = int(input('Digite o segundo valor: '))
v3 = int(input('Digite o terceiro valor: '))

#Satisfazer as condições de existência do triângulo
m = (v1+v2)
n = (v1+v3)
o = (v2+v3)
 
if m>v3 and n>v2 and o>v1:
 print(f"Valores satisfazem a condição de retângulo")
else:
 print(f"Valores não satisfazem a condição de retângulo!")

if v1==v2 and v2==v3:
 print(f"Triângulo Equilátero")

elif v1==v2 or v2==v3 or v1==v3:
 print(f"Triângulo Isósceles")

elif v1!=v2 and v1!=v3 and v2!=v3:
 print(f"Triângulo Escaleno")



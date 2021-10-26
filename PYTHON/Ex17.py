# Verificar se os valores digitados formam um triângulo retângulo
print("Verificar se valores digitados formam um triângulo retângulo")

a = int(input('Digite o valor A: '))
b = int(input('Digite o valor B: '))
c = int(input('Digite o valor C: '))

#Satisfazer as condições de existência do triângulo
m = (b*b) + (c*c)
n = (a*a) + (c*c)
o = (a*a) + (b*b)
p = (a*a)
q = (b*b)
r = (c*c)

if m==p or n==q or o==r:
 print(f"Triângulo Retângulo")
else:
 print(f"Valores não formam um triângulo retângulo!")
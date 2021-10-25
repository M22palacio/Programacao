# Calcular o troco da compra de 5 produtos

a = float(input('Digite o valor do produto a: '))
b = float(input('Digite o valor do produto b: '))
c = float(input('Digite o valor do produto c: '))
d = float(input('Digite o valor do produto d: '))
e = float(input('Digite o valor do produto e: '))

soma = a+b+c+d+e
print(f"O valor total das compras em R$: {soma:.2f}")

valor = float(input('Digite a quantia de dinheiro para o pagamento: '))
troco = valor - soma

print(f"O troco é R$: {troco:.2f}")
''' Entrar via teclado com o sexo de determinado usuário e aceitar somente
F ou M como respostas válidas'''

print("Solicitar o sexo do usuário")

sexo = str(input('Digite o sexo: '))

while ((sexo!='F' and sexo!='f') and (sexo!='M' and sexo!='m')):
 print(f"Erro! Somente F ou M")
 sexo = str(input("Digite novamente: "))

if sexo =='m' or sexo=='M':
 print(f"Sexo Masculino") 
else:
 print(f"Sexo Feminino ")
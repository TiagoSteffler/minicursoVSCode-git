#Dentro dessa pasta, você deverá criar um programa em C ou Python que recebe dois valores e que imprima:
#- a soma
#- a diferença entre o maior e o menor
#- a média
#- e o resto da divisão entre o maior e o menor. 

n1 = int(input("Digite o primeiro valor: "))
n2 = int(input("Digite o segundo valor: "))

soma = n1 + n2
maior = max(n1, n2)
menor = min(n1, n2)
diferenca = maior - menor

media = (n1 + n2) / 2
resto = maior % menor

print(f"Soma: {soma}")
print(f"Diferença: {diferenca}")
print(f"Média: {media}")
print(f"Resto da divisão: {resto}")
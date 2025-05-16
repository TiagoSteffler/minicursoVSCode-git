import sys

def main():
    if len(sys.argv) != 3:
        print("Uso: python edgar_lima.py <numero1> <numero2>")
        return

    try:
        num1 = float(sys.argv[1])
        num2 = float(sys.argv[2])
    except ValueError:
        print("Erro: ambos os argumentos devem ser números.")
        return

    soma = num1 + num2
    maior = max(num1, num2)
    menor = min(num1, num2)
    diferenca = maior - menor
    media = soma / 2

    if menor != 0:
        resto = maior % menor
    else:
        resto = "Indefinido (divisão por zero)"

    print(f"Soma: {soma}")
    print(f"Diferença entre o maior e o menor: {diferenca}")
    print(f"Média: {media}")
    print(f"Resto da divisão do maior pelo menor: {resto}")

if __name__ == "__main__":
    main()

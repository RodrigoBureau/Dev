num = int(input("Insira um número entre 1 e 100: "))

while num < 1 or num > 100:
    num = int(input("Número inválido! Insira um número entre 1 e 100: "))

print(f"Inseriu o número: {num}")

contador = 0

while contador < 10:
    numero = int(input(f"Insira o {contador + 1}º número: "))
    if numero % 2 == 0:
        print("Número par")
    else:
        print("Número ímpar")
    contador += 1
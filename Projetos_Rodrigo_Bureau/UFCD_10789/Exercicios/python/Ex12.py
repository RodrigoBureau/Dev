num = int(input("Insira um número: "))
op = 0

for i in range(1, num):
    soma = num + i
    subtracao = num - i
    multiplicacao = num * i
    divisao = num / i if i != 0 else "Indefinido"

    print(f"{num} + {i} = {soma}")
    print(f"{num} - {i} = {subtracao}")
    print(f"{num} * {i} = {multiplicacao}")
    print(f"{num} / {i} = {divisao}")

    op += 4

print(f"\nTotal de operações realizadas: {op}")

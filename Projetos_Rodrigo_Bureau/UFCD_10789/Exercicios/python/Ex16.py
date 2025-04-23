num_pares = []
contador = 0

while contador < 30:
    num = int(input("Insira um número par entre 1 e 50 (Tem que Inserir até 30 números): "))
    
    if 1 <= num <= 50 and num % 2 == 0:
        num_pares.append(num)
        contador += 1

media = sum(num_pares) / 30
print(f"A média é: {media}")

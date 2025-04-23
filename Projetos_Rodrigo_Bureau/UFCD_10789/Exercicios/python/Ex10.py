num = int(input("Insira um número para que sejam mostrados todos os divisores do mesmo: "))
divisores = 0

for i in range(1, num + 1):
    if num % i == 0:
        divisores += 1

print(f"O número {num} possui {divisores} divisores.")
contador = 0
soma = 0

while contador < 10:
    nota = float(input(f"Insira a nota do {contador + 1}º aluno (0 a 10): "))
    
    if 0 <= nota <= 10:
        soma += nota
        contador += 1
    else:
        print("Nota inválida! Insira um valor entre 0 e 10.")

media = soma / 10
print(f"A média das notas é: {media}")
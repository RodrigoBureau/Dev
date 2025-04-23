num = int(input("Insira um número inteiro: "))

if num < 2:
    print("Não é primo")
else:
    divisor = 2
    primo = True

    while divisor < num:
        if num % divisor == 0:
            primo = False
            break
        divisor += 1

    if primo:
        print("É primo")
    else:
        print("Não é primo")

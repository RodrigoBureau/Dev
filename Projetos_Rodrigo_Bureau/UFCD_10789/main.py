num1 = int(input("Escreva o primeiro número: "))
num2 = int(input("Escreva o segundo número: "))
num3 = int(input("Escreva o terceiro número: "))

if num1>num2 & num2>num3:
    print(f"{num1} ser maior {num2} ser meio {num3} ser menor")
elif num1>num3 & num3>num2:
    print(f"{num1} ser maior {num3} ser meio {num2} ser menor")
elif num3>num2 & num2>num1:
    print(f"{num3} ser maior {num2} ser meio {num1} ser menor")
elif num3>num1 & num1>num2:
    print(f"{num3} ser maior {num1} ser meio {num2} ser menor")
elif num2>num1 & num1>num3:
    print(f"{num2} ser maior {num1} ser meio {num3} ser menor")
elif num2>num3 & num3>num1:
    print(f"{num2} ser maior {num3} ser meio {num1} ser menor")


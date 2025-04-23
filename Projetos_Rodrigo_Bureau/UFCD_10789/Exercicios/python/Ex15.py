for i in range(0, 256, 20):
    print("\nCódigo ASCII de", i, "a", min(i + 19, 255))
    print("-" * 35)
    for j in range(i, min(i + 20, 256)):
        try:
            print(f"{j:3} -> {chr(j)}")
        except:
            print(f"{j:3} -> (inválido)")
    continuar = input("\nDigite Enter para continuar ou 's' para sair: ")
    if continuar.lower() == 's':
        print("Fim")
        break


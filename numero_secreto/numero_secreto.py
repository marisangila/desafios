NUMERO_SECRETO = 42
TENTATIVAS = 10

for i in range(1, TENTATIVAS + 1):
    print(f"Tentativa {i} de {TENTATIVAS}.\n")
    palpite = int(input("Digite um número inteiro:\n"))

    if palpite < NUMERO_SECRETO:
        print("Tente um número maior!\n")
    elif palpite > NUMERO_SECRETO:
        print("Tente um número menor!\n")
    else:
        print("Você acertou!")
        break
if i > TENTATIVAS:
    print("Número de tentativas esgotadas!\nO número secreto é", NUMERO_SECRETO)
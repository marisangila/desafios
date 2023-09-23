import math

fib1 = fib2 = 1

n = int(input("Digite um número inteiro:\n"))

print(f"{fib1} eh primo!")
print(f"{fib2} eh primo!")

for i in range(2, n):
    fibAtual = fib1 + fib2
    fib1 = fib2
    fib2 = fibAtual
    ehPrimo = True

    for j in range(2, int(math.sqrt(fibAtual)) + 1):
        if fibAtual % j == 0:
            ehPrimo = False
            break

    if ehPrimo:
        print(f"{fibAtual} eh primo!")
    else:
        print(f"{fibAtual} nao eh primo!")
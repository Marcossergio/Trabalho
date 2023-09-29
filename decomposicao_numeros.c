def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def goldbach_conjecture(n):
    if n <= 2 or n % 2 != 0:
        print("Apenas números inteiros pares maiores que 2 são permitidos.")
        return
    
    for i in range(2, n//2 + 1):
        if is_prime(i) and is_prime(n - i):
            print(f"{n} = {i} + {n - i}")
            return

# Solicita ao usuário um número inteiro maior que 2
while True:
    try:
        num = int(input("Digite um número inteiro maior que 2: "))
        if num > 2:
            break
        else:
            print("Por favor, digite um número maior que 2.")
    except ValueError:
        print("Por favor, digite um número inteiro válido.")

goldbach_conjecture(num)

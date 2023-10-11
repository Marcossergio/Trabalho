#include <stdio.h>

// Função para verificar se um número é primo
int eh_primo(int n) {
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Função para encontrar a decomposição
void decompor_em_primos(int n) {
    int i;
    for (i = 2; i <= n / 2; i++) {
        if (eh_primo(i) && eh_primo(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            return;
        }
    }
}

int main() {
    int n;
    printf("Digite um número inteiro maior que 2: ");
    scanf("%d", &n);
    if (n <= 2) {
        printf("O número deve ser maior que 2.\n");
        return 0;
    }
    decompor_em_primos(n);
    return 0;
}

#include <stdio.h>

int main() {
    const int senhaCorreta = 2026;
    int senha, tentativa;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaCorreta) {
            printf("Acesso Concedido!\n");
            printf("Numero de tentativas utilizadas: %d\n", tentativa);
            return 0;
        }

        printf("Senha incorreta!\n");
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}
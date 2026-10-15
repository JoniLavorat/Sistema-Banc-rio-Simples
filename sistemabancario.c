#include <stdio.h>
#include <string.h>

#define SENHA_CORRETA "1234"

// Função para exibir o menu principal
void exibirMenu() {
    printf("\n=== SISTEMA BANCÁRIO ===\n");
    printf("1. Consultar saldo\n");
    printf("2. Depositar\n");
    printf("3. Sacar\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
}

// Função para consultar o saldo atual
void consultarSaldo(float saldo) {
    printf("Seu saldo atual é: R$ %.2f\n", saldo);
}

// Função para realizar depósito
void depositar(float *saldo) {
    float valor;

    printf("Digite o valor do depósito: R$ ");
    if (scanf("%f", &valor) != 1) {
        printf("Entrada inválida. Digite um valor numérico.\n");
        return;
    }

    if (valor > 0) {
        *saldo += valor;
        printf("Depósito realizado com sucesso!\n");
        printf("Novo saldo: R$ %.2f\n", *saldo);
    } else {
        printf("Valor inválido. O valor deve ser maior que zero.\n");
    }
}

// Função para realizar saque
void sacar(float *saldo) {
    float valor;

    printf("Digite o valor do saque: R$ ");
    if (scanf("%f", &valor) != 1) {
        printf("Entrada inválida. Digite um valor numérico.\n");
        return;
    }

    if (valor <= 0) {
        printf("Valor inválido. O valor deve ser maior que zero.\n");
    } else if (valor > *saldo) {
        printf("Saldo insuficiente para realizar esse saque.\n");
    } else {
        *saldo -= valor;
        printf("Saque realizado com sucesso!\n");
        printf("Novo saldo: R$ %.2f\n", *saldo);
    }
}

int main(void) {
    int opcao;
    float saldo = 1000.0;
    char senha[20];

    printf("=== SISTEMA BANCÁRIO ===\n");
    printf("Bem-vindo ao sistema bancário!\n");
    printf("Este sistema permite consultar saldo,\n");
    printf("realizar depósitos e saques com segurança.\n\n");
    printf("=== AUTENTICAÇÃO ===\n");
    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(senha, SENHA_CORRETA) != 0) {
        printf("Senha incorreta! Acesso negado.\n");
        return 0;
    }

    printf("Acesso permitido. Bem-vindo!\n");

    do {
        exibirMenu();

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida. Digite um número inteiro.\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                consultarSaldo(saldo);
                break;
            case 2:
                depositar(&saldo);
                break;
            case 3:
                sacar(&saldo);
                break;
            case 4:
                printf("Obrigado por usar nosso sistema bancário!\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
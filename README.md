# 💰 Sistema Bancário em C

> Projeto acadêmico desenvolvido em Linguagem C com foco na aplicação de estruturas de controle, funções, validação de entradas e manipulação de dados em um ambiente de terminal.

## 📖 Visão Geral

O Sistema Bancário é uma aplicação de console que simula operações bancárias essenciais, permitindo ao usuário autenticar-se e realizar transações financeiras básicas de forma segura e controlada.

O projeto foi construído com ênfase em boas práticas de programação, modularização do código, validação de entradas e tratamento de exceções, proporcionando uma experiência consistente ao usuário.

## ✨ Funcionalidades

- Autenticação por senha
- Consulta de saldo da conta
- Realização de depósitos
- Realização de saques
- Validação de entradas numéricas
- Verificação de saldo disponível para saque
- Tratamento de opções inválidas do menu
- Encerramento seguro da aplicação

## 🏗️ Arquitetura do Projeto

O sistema foi estruturado utilizando funções independentes para garantir organização, reutilização e facilidade de manutenção.

```text
Sistema Bancário
│
├── exibirMenu()
├── consultarSaldo()
├── depositar()
├── sacar()
└── main()
```

### Responsabilidades das Funções

| Função | Responsabilidade |
|----------|------------------|
| `exibirMenu()` | Exibir o menu principal |
| `consultarSaldo()` | Mostrar o saldo atual |
| `depositar()` | Realizar depósitos na conta |
| `sacar()` | Realizar saques com validação de saldo |
| `main()` | Controlar o fluxo geral do sistema |

## 🔐 Autenticação

Antes do acesso ao sistema, o usuário deve informar uma senha válida.

```text
Senha padrão: 1234
```

Caso a senha esteja incorreta, o programa encerra a execução e bloqueia o acesso às funcionalidades bancárias.

## 📋 Menu Principal

```text
=== SISTEMA BANCÁRIO ===
1. Consultar saldo
2. Depositar
3. Sacar
4. Sair
```

## ✅ Regras de Negócio

### Consultar Saldo

Exibe o saldo atual da conta formatado em reais (R$).

### Depositar

- Permite apenas valores positivos.
- Atualiza automaticamente o saldo da conta.
- Informa o novo saldo após a operação.

### Sacar

- Permite apenas valores positivos.
- Verifica a disponibilidade de saldo.
- Impede saques superiores ao saldo disponível.
- Atualiza e exibe o novo saldo após a operação.

## 🛡️ Tratamento de Erros

O sistema possui mecanismos de validação para evitar falhas de execução:

- Senha incorreta
- Opções inexistentes no menu
- Valores não numéricos
- Depósitos com valor menor ou igual a zero
- Saques com valor menor ou igual a zero
- Saques superiores ao saldo disponível

Exemplos de mensagens exibidas ao usuário:

```text
Opção inválida! Tente novamente.
Entrada inválida. Digite um número inteiro.
Entrada inválida. Digite um valor numérico.
Saldo insuficiente para realizar esse saque.
```

## 🚀 Como Executar

### Compilação

```bash
gcc main.c -o sistema_bancario
```

### Execução

#### Windows

```bash
sistema_bancario.exe
```

#### Linux / macOS

```bash
./sistema_bancario
```

## 🧪 Exemplo de Uso

```text
=== AUTENTICAÇÃO ===
Digite a senha: 1234

Acesso permitido. Bem-vindo!

=== SISTEMA BANCÁRIO ===
1. Consultar saldo
2. Depositar
3. Sacar
4. Sair
Escolha uma opção:
```

## 🛠️ Tecnologias Utilizadas

- Linguagem C
- Biblioteca padrão `stdio.h`
- Biblioteca padrão `string.h`
- Compilador GCC

## 🎓 Competências Aplicadas

Durante o desenvolvimento deste projeto foram utilizados conceitos fundamentais de programação:

- Funções
- Estruturas condicionais (`if`, `else if`, `switch`)
- Estruturas de repetição (`do-while`)
- Vetores de caracteres (Strings)
- Ponteiros
- Entrada e saída de dados
- Tratamento de erros
- Validação de dados
- Modularização de código

## 📈 Possíveis Evoluções

- Cadastro de múltiplos usuários
- Transferências entre contas
- Histórico de transações
- Persistência em arquivos
- Criptografia de senhas
- Interface gráfica
- Integração com banco de dados

## 👨‍💻 Autor

**Walter Joni Alves Lavorat**

Projeto desenvolvido para fins acadêmicos e de aprimoramento das competências em desenvolvimento de software utilizando Linguagem C.

---

⭐ Se este projeto foi útil para você, considere deixar uma estrela no repositório.

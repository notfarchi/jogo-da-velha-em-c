#include <stdio.h>

// Função para imprimir o tabuleiro
void imprimirTabuleiro(char tabuleiro[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("-----------\n");
        }
    }
    printf("\n");
}

// Função para verificar se um jogador venceu
int verificarVitoria(char jogador, char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        // Verificar linhas e colunas
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1; // Jogador venceu
        }
    }

    // Verificar diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1; // Jogador venceu
    }

    return 0; // Ninguém venceu ainda
}

// Função para verificar se o tabuleiro está cheio (empate)
int verificarEmpate(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0; // Ainda há espaços vazios
            }
        }
    }
    return 1; // Tabuleiro está cheio
}

int main() {
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char jogadorAtual = 'X';
    int linha, coluna;

    printf("Jogo da Velha\n");
    imprimirTabuleiro(tabuleiro);

    do {
        // Solicitar jogada do jogador atual
        printf("Jogador %c, digite a linha (0-2) e a coluna (0-2) separadas por espaco: ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        // Verificar se a posição escolhida é válida
        if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3 || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida. Tente novamente.\n");
            continue;
        }

        // Realizar a jogada
        tabuleiro[linha][coluna] = jogadorAtual;

        // Imprimir o tabuleiro atualizado
        imprimirTabuleiro(tabuleiro);

        // Verificar se o jogador venceu
        if (verificarVitoria(jogadorAtual, tabuleiro)) {
            printf("Jogador %c venceu!\n", jogadorAtual);
            break;
        }

        // Verificar empate
        if (verificarEmpate(tabuleiro)) {
            printf("Empate!\n");
            break;
        }

        // Trocar para o próximo jogador
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';

    } while (1); // Loop infinito

    return 0;
}

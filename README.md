# Jogo da Velha em C

Este é um simples jogo da velha implementado em linguagem C, desenvolvido como parte do aprendizado durante o meu primeiro semestre na Universidade Federal de Uberlândia, no ano de 2022. O código aborda conceitos fundamentais de programação, como laços, matrizes e funções.

## Instruções

1. **Compilação:**
   Para compilar o código, utilize um compilador C padrão. Por exemplo, no terminal, execute:

   ```bash
   gcc jogo_da_velha.c -o jogo_da_velha

2. **Instruções do Jogo:**
- O tabuleiro é representado por uma matriz 3x3.
- Cada jogador (X ou O) faz uma jogada por vez, indicando a linha e coluna desejadas.
- As posições são numeradas de 0 a 2, tanto para linha quanto para coluna.
- Ganha o jogador que conseguir alinhar três de suas marcações consecutivamente na horizontal, vertical ou diagonal.
- O jogo resulta em empate se todas as posições do tabuleiro estiverem preenchidas sem que haja um vencedor.

3. **Funções Principais:**

```bash
imprimirTabuleiro()
```
- Imprime o estado atual do tabuleiro na tela.

```bash
verificarVitoria()
```
- Verifica se o jogador atual venceu, analisando as linhas, colunas e diagonais do tabuleiro.

```bash
- verificarEmpate()
```
- Verifica se o tabuleiro está completamente preenchido, indicando um empate.

```bash
- main()
```
- A função principal do programa, onde o jogo é executado. Os jogadores fazem suas jogadas alternadamente até que haja um vencedor ou empate.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para sugerir melhorias, correções de bugs ou novos recursos através de pull requests.

Divirta-se jogando e programando! 🎮✨

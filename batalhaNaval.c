# 🌊 Desafio Batalha Naval - MateCheck

Este repositório contém a solução para o Desafio de Programação Batalha Naval MateCheck, implementado em C. O desafio explora o uso de matrizes para simular um jogo de tabuleiro e o cálculo de áreas de efeito de habilidades.

## 🎯 Níveis do Desafio

O projeto está dividido em três seções principais dentro do arquivo `batalha_naval.c`, seguindo os níveis propostos:

### 🔰 Nível Novato: Posicionamento (5x5)
* **Objetivo:** Criar um tabuleiro 5x5 e posicionar um navio vertical e um horizontal.
* **Saída:** Exibição das coordenadas de cada parte dos navios.

### 🗺️ Nível Aventureiro: Expansão e Diagonais (10x10)
* **Objetivo:** Expandir para um tabuleiro 10x10 e posicionar navios na vertical, horizontal e **duas diagonais**.
* **Saída:** Exibição do tabuleiro completo (0=vazio, 3=ocupado).

### ⚔️ Nível Mestre: Habilidades Especiais (Matrizes)
* **Objetivo:** Implementar a lógica de três habilidades especiais usando a Distância de Manhattan e estruturas de repetição aninhadas.
* **Habilidades Implementadas:**
    1.  Cruz
    2.  Octaedro (Losango/Diamante)
    3.  Cone
* **Saída:** Exibição do tabuleiro para cada habilidade (0=não afetado, 1=atingido).

## 🛠️ Como Compilar e Executar

Para rodar este código, você precisa de um compilador C (como o GCC).

1.  **Compile o arquivo:**
    ```bash
    gcc batalha_naval.c -o batalha_naval
    ```

2.  **Execute o programa:**
    ```bash
    ./batalha_naval
    ```

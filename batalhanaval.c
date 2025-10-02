#include <stdio.h>


// --- Constantes ---
#define TAMANHO 10 
#define AGUA 0 
#define NAVIO 3 

int main() {
    
    // Vetor para mapear os índices (0-9) para letras (A-J) para a exibição
    char linha_letras[TAMANHO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    
    // 1. Criando e Inicializando o Tabuleiro (matriz 10x10)
    int tabuleiro[TAMANHO][TAMANHO];
    
    // Inicializa todas as posições da matriz com AGUA (0)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
    
    // --- 2. Posicionamento de Navios (Removido por solicitação) ---
    // Esta seção foi removida. O tabuleiro permanece apenas com AGUA (0).
    
    // --- 3. Exibição do Tabuleiro ---
    printf("\n--- Tabuleiro Batalha Naval ---\n");
    
    // Imprime Cabeçalho de Colunas (0 a 9)
    printf("  "); 
    for (int col = 0; col < TAMANHO; col++) {
        printf(" %d", col);
    }
    printf("\n +---------------------\n"); 
    
    // Imprime Conteúdo da Matriz
    for (int i = 0; i < TAMANHO; i++) {
        printf("%c|", linha_letras[i]); // Índice da Linha (A a J)
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d", tabuleiro[i][j]); 
        }
        printf(" |\n");
    }
    printf(" +---------------------\n");
    printf("Legenda: %d = Água | %d = Navio (Não posicionado)\n", AGUA, NAVIO);
    
    return 0;
}
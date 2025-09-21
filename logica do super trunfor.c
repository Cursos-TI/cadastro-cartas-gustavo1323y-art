#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enum para mapear os atributos a numeros legiveis
enum Atributos {
    POPULACAO = 1,
    AREA = 2,
    PIB = 3,
    PONTOS_TURISTICOS = 4,
    DENSIDADE = 5,
    SUPER_PODER = 6
};

// Estrutura para representar uma carta de cidade
typedef struct {
    char estado[50];
    char nome_cidade[100];
    unsigned int populacao;
    float area;
    float pib; // em bilhoes de reais
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

// Array com os nomes dos atributos para exibicao
const char* nomesAtributos[] = {
    "", // Indice 0 vazio para corresponder ao enum
    "Populacao",
    "Area",
    "PIB",
    "Pontos Turisticos",
    "Densidade Demografica",
    "Super Poder"
};

// Funcao para obter o valor numerico de um atributo de uma carta
float obterValorAtributo(const Carta* carta, int atributo) {
    switch (atributo) {
        case POPULACAO:
            return (float)carta->populacao;
        case AREA:
            return carta->area;
        case PIB:
            return carta->pib;
        case PONTOS_TURISTICOS:
            return (float)carta->pontos_turisticos;
        case DENSIDADE:
            return carta->densidade;
        case SUPER_PODER:
            return carta->super_poder;
        default:
            return 0.0;
    }
}

// Funcao que compara as duas cartas e imprime o resultado
void compararAtributos(const Carta* carta1, const Carta* carta2, int opcao) {
    float valor1 = obterValorAtributo(carta1, opcao);
    float valor2 = obterValorAtributo(carta2, opcao);

    printf("\nAtributo escolhido: %s\n", nomesAtributos[opcao]);
    printf("%s: %.2f | %s: %.2f\n", carta1->nome_cidade, valor1, carta2->nome_cidade, valor2);

    // Usa o operador ternario para definir a regra de vitoria
    // Se a opcao for DENSIDADE (5), quem tem o menor valor vence (valor1 < valor2)
    // Caso contrario, quem tem o maior valor vence (valor1 > valor2)
    int venceu = (opcao == DENSIDADE) ? (valor1 < valor2) : (valor1 > valor2);

    if (valor1 == valor2) {
        printf("-- Empate --\n");
    } else if (venceu) {
        printf("Vencedor: %s\n", carta1->nome_cidade);
    } else {
        printf("Vencedor: %s\n", carta2->nome_cidade);
    }
}

// Funcao para exibir as cartas disponiveis
void imprimirCartasDisponiveis(const Carta* cartas, int totalCartas) {
    printf("--- Cartas Disponiveis ---\n");
    for (int i = 0; i < totalCartas; i++) {
        printf("%d. %s\n", i + 1, cartas[i].nome_cidade);
    }
    printf("---------------------------\n");
}


int main() {
    // Cartas pré-definidas para o jogo
    Carta cartas[] = {
        {"SP", "Sao Paulo", 12400000, 1521.0, 763.8, 100, 0, 0, 0},
        {"RJ", "Rio de Janeiro", 6700000, 1200.0, 362.2, 50, 0, 0, 0},
        {"BA", "Salvador", 2900000, 693.0, 63.8, 40, 0, 0, 0},
        {"MG", "Belo Horizonte", 2500000, 331.0, 97.4, 30, 0, 0, 0}
    };

    int numCartas = sizeof(cartas) / sizeof(cartas[0]);

    // ----- Calculos para cada carta (feito uma unica vez) -----
    for (int i = 0; i < numCartas; i++) {
        cartas[i].densidade = cartas[i].populacao / cartas[i].area;
        cartas[i].pib_per_capita = (cartas[i].pib * 1000000000.0f) / cartas[i].populacao;

        // Soma dos atributos para o Super Poder
        cartas[i].super_poder = (float)cartas[i].populacao + cartas[i].area + cartas[i].pib +
                                (float)cartas[i].pontos_turisticos + cartas[i].pib_per_capita;
    }

    // --- NOVA LOGICA DE ESCOLHA DAS CARTAS ---
    int escolha1, escolha2;

    printf("--- Jogo Super Trunfo ---\n");

    // Escolha da PRIMEIRA carta
    {
        imprimirCartasDisponiveis(cartas, numCartas);
        printf("Escolha o numero da PRIMEIRA carta (1 a %d): ", numCartas);
        scanf("%d", &escolha1);
        if (escolha1 < 1 || escolha1 > numCartas) {
            printf("Opcao invalida. Por favor, escolha um numero de 1 a %d.\n", numCartas);
        }
    } while (escolha1 < 1 || escolha1 > numCartas);

    // Escolha da SEGUNDA carta
    do {
        imprimirCartasDisponiveis(cartas, numCartas);
        printf("Escolha o numero da SEGUNDA carta (1 a %d): ", numCartas);
        printf("Nao pode ser a mesma da primeira!\n");
        scanf("%d", &escolha2);
        if (escolha2 < 1 || escolha2 > numCartas || escolha2 == escolha1) {
            printf("Opcao invalida ou ja escolhida. Por favor, tente novamente.\n");
        }
    } while (escolha2 < 1 || escolha2 > numCartas || escolha2 == escolha1);

    // Usa a escolha do jogador para selecionar as cartas do array
    Carta carta1 = cartas[escolha1 - 1];
    Carta carta2 = cartas[escolha2 - 1];

    printf("\nCartas em jogo: %s vs. %s\n", carta1.nome_cidade, carta2.nome_cidade);

    // Menu de opcoes para a comparacao
    printf("\nEscolha o atributo para a comparacao:\n");
    printf("1. Populacao (vence o maior)\n");
    printf("2. Area (vence o maior)\n");
    printf("3. PIB (vence o maior)\n");
    printf("4. Pontos Turisticos (vence o maior)\n");
    printf("5. Densidade Demografica (vence o menor)\n");
    printf("6. Super Poder (soma dos atributos, vence o maior)\n");

    int opcao;
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    // Chama a funcao de comparacao com a opcao escolhida
    compararAtributos(&carta1, &carta2, opcao);

    return 0;
}

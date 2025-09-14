#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado_1[50], codigo_1[50], nome_da_cidade_1[100];
    unsigned int populacao_1; // Tipo correto para o desafio
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_1;
    float pib_per_capita_1;
    float super_poder_1; // Variável para o Super Poder

    // Declaração de variáveis para a Carta 2
    char estado_2[50], codigo_2[50], nome_cidade_2[100];
    unsigned int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_2;
    float pib_per_capita_2;
    float super_poder_2; // Variável para o Super Poder

    // ----- Leitura dos dados da Carta 1 -----
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %s", estado_1);
    printf("Codigo: ");
    scanf(" %s", codigo_1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_da_cidade_1);
    printf("Populacao: ");
    scanf("%u", &populacao_1); // Usando %u para unsigned long int
    printf("Area (km²): ");
    scanf("%f", &area_1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    // ----- Leitura de dados da Carta 2 -----
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %s", estado_2);
    printf("Codigo: ");
    scanf(" %s", codigo_2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade_2);
    printf("Populacao: ");
    scanf("%u", &populacao_2); // Usando %u para unsigned long int
    printf("Area (km²): ");
    scanf(" %f", &area_2);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib_2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_2);

    // ----- Calculo para Carta 1 ----
    densidade_1 = (float)populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000.0f) / (float)populacao_1;

    // ----- Calculo para a Carta 2 -----
    densidade_2 = (float)populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000.0f) / (float)populacao_2;
    
    // ----- NOVO: Calculo do Super Poder -----
    super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_per_capita_1 + (1.0f / densidade_1);
    super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_per_capita_2 + (1.0f / densidade_2);

    // ----- Exibição dos resultados -----
    printf("\n\n--- Carta Super Trunfo ---\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Codigo: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %u\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhoes de reais\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
    printf("Super Poder: %.2f\n", super_poder_1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Codigo: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("Populacao: %u\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhoes de reais \n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
    printf("Super Poder: %.2f\n", super_poder_2);

    // ----- NOVO: Exibição da Batalha de Cartas -----
    printf("\n--- Batalha de Cartas ---\n\n");

    // Comparacao de Populacao
    printf("Populacao: A Carta 1 e maior que a Carta 2 ? (%d)\n", (populacao_1 > populacao_2));

    // Comparacao de Area
    printf("Area: A Carta 1 e maior que a Carta 2 ? (%d)\n", (area_1 > area_2));

    // Comparacao de PIB
    printf("PIB: A Carta 1 e maior que a Carta 2 ? (%d)\n", (pib_1 > pib_2));

    // Comparacao de Pontos Turisticos
    printf("Pontos Turisticos: A Carta 1 e maior que a Carta 2 ? (%d)\n", (pontos_turisticos_1 > pontos_turisticos_2));

    // Comparacao de Densidade Populacional (menor valor vence!)
    printf("Densidade Populacional: A Carta 1 e menor que a Carta 2 ? (%d)\n",(densidade_1 < densidade_2));

    // Comparacao de PIB per Capita
    printf("PIB per Capita: A Carta 1 e maior que a Carta 2 ? (%d)\n", (pib_per_capita_1 > pib_per_capita_2));

    // Comparacao de Super Poder
    printf("Super Poder: A Carta 1 e maior quer Carta 2 ? (%d)\n", (super_poder_1 > super_poder_2));

    return 0;
}

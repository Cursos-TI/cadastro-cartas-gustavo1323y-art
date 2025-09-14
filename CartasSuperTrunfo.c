#include <stdio.h>

int main() {
     // Declaração de variaveis para a Carta 1
     char estado_1[50], codigo_1[50], nome_da_cidade_1[100];
     int populacao_1;
     float area_1;
     float pib_1;
     int pontos_turisticos_1;

     // Declaração de variaveis para Carta 1
     char estado_2[50], codigo_2[50], nome_cidade_2[100];
     int populacao_2;
     float area_2;
     float pib_2;
     int pontos_turisticos_2;

     //----- Leitura dos dados da Carta 1 -----
     printf("Digite os dados da Carta 1:\n");
     printf("Estado: ");
     scanf("%s", estado_1);
     printf("Codigo: ");
     scanf("%s", codigo_1);
     printf("Nome da Cidade ");
     scanf(" %[^\n]", nome_da_cidade_1);
     printf("Populacao: ");
     scanf("%d",  &populacao_1);
     printf("Area(km²): ");
     scanf("%f", &area_1);
     printf("PIB (em bilhoes de reais): ");
     scanf("%f", &pib_1);
     printf("Numeros de Pontos Turiticos: ");
     scanf("%d", &pontos_turisticos_1);

     //----- Leitura de dados da Carta 2 -----
     printf("\nDigite os dados da Carta 2:\n");
     printf("Estado: ");
     scanf("%s", estado_2);
     printf("Codigo: ");
     scanf("%s", codigo_2);
     printf("Nome da Cidade: ");
     scanf(" %[^\n]", nome_cidade_2);
     printf("Populacao: ");
     scanf("%d", &populacao_2);
     printf("Area (km²): ");
     scanf("%f", &area_2);
     printf("PIB (em bilhoes de reais): ");
     scanf("%f", &pib_2);
     printf("Numero de Pontos Turisticos: ");
     scanf("%d", &pontos_turisticos_2);

     //----- Exibição dos resultados -----
     printf("\n\n--- Carta Super Trunfo ---\n");
     printf("Carta 1:\n");
     printf("Estado: %s\n", estado_1);
     printf("Codigo: %s\n", codigo_1);
     printf("Nome da Cidade: %s\n", nome_da_cidade_1);
     printf("Populacao:%d\n", populacao_1);
     printf("Area: %.2f km²\n:", area_1);
     printf("PIB: %.2f bilhoes de reais\n", pib_1);
     printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_1);


     printf("\nCarta 2:\n");
     printf("Estado: %s\n", estado_2);
     printf("Codigo: %s\n", codigo_2);
     printf("Nome da Cidade: %s\n", nome_cidade_2);
     printf("Populacao: %d\n", populacao_2);
     printf("Area: %.2f km²\n", area_2);
     printf("PIB: %.2f bilhoes de reais \n", pib_2);
     printf("Numero de Pontos Turiticos: %d\n", pontos_turisticos_2);

     return 0;
}
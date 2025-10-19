#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Cidade 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float calculoDensidadePopulacional1;
    float calculoPibPerCapita1;
    // Cidade 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float calculoDensidadePopulacional2;
    float calculoPibPerCapita2;

  // Área para entrada de dados
    // Carta 1
    printf("== CADASTRO CARTA 1 ==\n");
    printf("Digite a letra do estado 1 (A - H): ");
    scanf(" %c", &estado1);
    printf("Digite o código do estado 1 (primeira letra do estado + valor de 01-04 - ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome do estado 1: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população do estado 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área do estado 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB do estado 1 (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos do estado 1: ");
    scanf("%d", &pontosTuristicos1);

    //Cálculo da densidade populacional e PIB per capita da cidade 1
    calculoDensidadePopulacional1 = populacao1 / area1;
    calculoPibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2
    printf("== CADASTRO CARTA 2 ==\n");
    printf("Digite a letra do estado 2 (A - H): ");
    scanf(" %c", &estado2);
    printf("Digite o código do estado 2 (primeira letra do estado + valor de 01-04 - ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome do estado 2: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população do estado 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área do estado 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB do estado 2 (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos do estado 2: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculo da densidade populacional e PIB per capita da cidade 1
    calculoDensidadePopulacional2 = populacao2 / area2;
    calculoPibPerCapita2 = (pib2 * 1000000000) / populacao2;

  // Área para exibição dos dados da cidade
    //Carta 1
    printf("== CARTA 1 ==\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", calculoDensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", calculoPibPerCapita1);

    //Carta 2
    printf("== CARTA 2 ==\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", calculoDensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", calculoPibPerCapita2);
  return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    printf("Desafio Super Trunfo\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char estado1[3], codcarta1[10], estado2[3], codcarta2[10];
      char cidade1[50], cidade2[50];
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2;

  // Área para entrada de dados
    // Carta 1
    printf("\nCarta 1\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o Código: ");
    scanf("%s", codcarta1);

    printf("Digite a Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Carta 2
    printf("\nCarta 2\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o Código: ");
    scanf("%s", codcarta2);

    printf("Digite a Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da Densidade Populacional e Pib per capita
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1, pibpercapita2 = pib2 / populacao2;

    // Área para exibição dos dados da cidade
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número dePontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per capita: %f\n", pibpercapita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", pibpercapita2);
    
    // Comparação de Cartas e exibição de resultados

    printf("\nCarta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 %s venceu!\n", cidade1);
    } else {
        printf("\nResultado: Carta 2 %s venceu!\n", cidade2);
    }

    return 0;
}

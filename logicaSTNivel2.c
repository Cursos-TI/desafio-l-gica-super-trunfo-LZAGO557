#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    printf("Desafio Super Trunfo\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char país1[50], país2[50];
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2;

  // Área para entrada de dados
    // Carta 1
    printf("\nCarta 1\n");
    printf("Digite o País: ");
    scanf("%s", país1);

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

    printf("Digite o País: ");
    scanf("%s", país2);

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
    printf("Nome o País: %s\n", país1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número dePontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per capita: %f\n", pibpercapita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Nome o País: %s\n", país2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", pibpercapita2);
    
    //Comparação lógica

    int escolhaJogador;

    printf("\nEscolha o atributo de comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("\nEscolha: ");
    scanf("%d", &escolhaJogador);



    switch (escolhaJogador)
    {
    case 1:
        printf("População\n");
        break;
        case 2:
        printf("Área\n");
        break;
        case 3:
        printf("PIB\n");
        break;
        case 4:
        printf("Número de Pontos Turísticos:\n");
        break;
        case 5:
        printf("Densidade Demográfica\n");
        break;
    
    default:
    printf("Opção inválida\n");
        break;

    }   if (escolhaJogador == (populacao1 = populacao2) && (area1 = area2) &&
         (pib1 = pib2) && (pontosturisticos1 = pontosturisticos2) &&
         (densidade1 = densidade2))
          {
            printf("### Jogo empatou! ###\n");
          } else if ((populacao1 > populacao2) && (area1 > area2) &&
         (pib1 > pib2) && (escolhaJogador, pontosturisticos1 > pontosturisticos2) &&
         (densidade1 > densidade2)) 
         {
          printf("### Carta 1 venceu! ###\n"); 
         
          } else {
          printf("### Carta 2 venceu! ###\n");
        } 

        
         
        
        


    return 0;
}

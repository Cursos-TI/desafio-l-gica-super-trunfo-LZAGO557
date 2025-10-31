#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    printf("Desafio Super Trunfo\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char pais1[50], pais2[50];
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2;

  // Área para entrada de dados
    // Carta 1
    printf("\nCarta 1\n");
    printf("Digite o País: ");
    scanf("%s", pais1);

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
    scanf("%s", pais2);

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
    printf("Nome do País: %s\n", pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per capita: %f\n", pibpercapita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Nome do País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", pibpercapita2);

    //Comparação lógica

    int escolhaJogador1;
    int escolhaJogador2;
    int resultado;
    int soma1, soma2;

    printf("\nEscolha o 1º atributo de comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("\nEscolha: ");
    scanf("%d", &escolhaJogador1);

    switch (escolhaJogador1)
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
        printf("Número de Pontos Turísticos\n");
        break;
        case 5:
        printf("Densidade Demográfica\n");
        break;
    
    default:
    printf("Opção inválida\n");
        break; }

    printf("\nEscolha o 2º atributo de comparação: ");
    scanf("%d", &escolhaJogador2);
        if (resultado = escolhaJogador2 == escolhaJogador1) {
        printf("Atributos iguais! Escolha outro atributo.\n");
        } else {
            switch (escolhaJogador2)
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
        printf("Número de Pontos Turísticos\n");
        break;
        case 5:
        printf("Densidade Demográfica\n");

    default:
    printf("Opção inválida\n");
        break;
    }   
        }

    
    // Lógica de comparação dos atributos escolhidos //

  if ((escolhaJogador1 == 1 && populacao1 > populacao2) ||
      (escolhaJogador1 == 2 && area1 > area2) ||
      (escolhaJogador1 == 3 && pib1 > pib2) ||
      (escolhaJogador1 == 4 && pontosturisticos1 > pontosturisticos2) ||
      (escolhaJogador1 == 5 && densidade1 < densidade2) && 
      (escolhaJogador2 == 1 && populacao1 > populacao2) ||
      (escolhaJogador2 == 2 && area1 > area2) ||
      (escolhaJogador2 == 3 && pib1 > pib2) ||
      (escolhaJogador2 == 4 && pontosturisticos1 > pontosturisticos2) ||
      (escolhaJogador2 == 5 && densidade1 < densidade2) ||
      
      // SOMA DOS ATRIBUTOS PARA DEFINIÇÃO DO VENCEDOR

      (populacao1 + area1 + pib1 + pontosturisticos1 + densidade1) >
      (populacao2 + area2 + pib2 + pontosturisticos2 + densidade2))
      
      {

        
    printf("\nCarta 1 vence!\n");

    printf("\nResultado\n");
    printf("Países: %s e %s\n", pais1, pais2);
    printf("Atributos: %d e %d\n", escolhaJogador1, escolhaJogador2);
    printf("Soma Atributos Carta 1: %f\n", populacao1 + area1 + pib1 + pontosturisticos1 + densidade1);
    printf("Soma Atributos Carta 2: %f\n", populacao2 + area2 + pib2 + pontosturisticos2 + densidade2);
    printf("Valores Atributos: ");
    
     
    switch (escolhaJogador1)  {
        case 1: /* População (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", populacao1, populacao2);
            break;
        case 2: /* Área (float) */
            printf("%.2f km² (Carta 1)  e  %.2f km² (Carta 2)\n", area1, area2);
            break;
        case 3: /* PIB (float) */
            printf("%.2f (Carta 1)  e  %.2f (Carta 2)\n", pib1, pib2);
            break;
        case 4: /* Pontos turísticos (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", pontosturisticos1, pontosturisticos2);
            break;
        case 5: /* Densidade (float) */
            printf("%.3f (Carta 1)  e  %.3f (Carta 2)\n", densidade1, densidade2);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    printf("Valores Atributos 2: ");
    switch (escolhaJogador2) {
        case 1: /* População (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", populacao1, populacao2);
            break;
        case 2: /* Área (float) */
            printf("%.2f km² (Carta 1)  e  %.2f km² (Carta 2)\n", area1, area2);
            break;
        case 3: /* PIB (float) */
            printf("%.2f (Carta 1)  e  %.2f (Carta 2)\n", pib1, pib2);
            break;
        case 4: /* Pontos turísticos (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", pontosturisticos1, pontosturisticos2);
            break;
        case 5: /* Densidade (float) */
            printf("%.3f (Carta 1)  e  %.3f (Carta 2)\n", densidade1, densidade2);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    printf("Vencedor: Carta 1\n");

  } else if ((escolhaJogador1 == 1 && populacao1 < populacao2) ||
        (escolhaJogador1 == 2 && area1 < area2) ||
        (escolhaJogador1 == 3 && pib1 < pib2) ||
        (escolhaJogador1 == 4 && pontosturisticos1 < pontosturisticos2) ||  
        (escolhaJogador1 == 5 && densidade1 > densidade2) && 
        (escolhaJogador2 == 1 && populacao1 < populacao2) ||
        (escolhaJogador2 == 2 && area1 < area2) ||
        (escolhaJogador2 == 3 && pib1 < pib2) ||
        (escolhaJogador2 == 4 && pontosturisticos1 < pontosturisticos2) ||  
        (escolhaJogador2 == 5 && densidade1 > densidade2) ||

        // SOMA DOS ATRIBUTOS PARA DEFINIÇÃO DO VENCEDOR

       (populacao1 + area1 + pib1 + pontosturisticos1 + densidade1) <
       (populacao2 + area2 + pib2 + pontosturisticos2 + densidade2)) 
      
      {

    printf("\nCarta 2 vence!\n");
    
    printf("\nResultado\n");
    printf("Países: %s e %s\n", pais1, pais2);
    printf("Atributos: %d e %d\n", escolhaJogador1, escolhaJogador2);
    printf("Soma Atributos Carta 1: %.f\n", populacao1 + area1 + pib1 + pontosturisticos1 + densidade1);
    printf("Soma Atributos Carta 2: %.f\n", populacao2 + area2 + pib2 + pontosturisticos2 + densidade2);
    printf("Valores Atributos 1: ");
    

    switch (escolhaJogador2) {
        case 1: /* População (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", populacao1, populacao2);
            break;
        case 2: /* Área (float) */
            printf("%.2f km² (Carta 1)  e  %.2f km² (Carta 2)\n", area1, area2);
            break;
        case 3: /* PIB (float) */
            printf("%.2f (Carta 1)  e  %.2f (Carta 2)\n", pib1, pib2);
            break;
        case 4: /* Pontos turísticos (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", pontosturisticos1, pontosturisticos2);
            break;
        case 5: /* Densidade (float) */
            printf("%.3f (Carta 1)  e  %.3f (Carta 2)\n", densidade1, densidade2);
            break;
        default:
            printf("Opção inválida\n");
            break; }

        printf("Valores Atributos 2: ");
    switch (escolhaJogador2) {
        case 1: /* População (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", populacao1, populacao2);
            break;
        case 2: /* Área (float) */
            printf("%.2f km² (Carta 1)  e  %.2f km² (Carta 2)\n", area1, area2);
            break;
        case 3: /* PIB (float) */
            printf("%.2f (Carta 1)  e  %.2f (Carta 2)\n", pib1, pib2);
            break;
        case 4: /* Pontos turísticos (inteiro) */
            printf("%d (Carta 1)  e  %d (Carta 2)\n", pontosturisticos1, pontosturisticos2);
            break;
        case 5: /* Densidade (float) */
            printf("%.3f (Carta 1)  e  %.3f (Carta 2)\n", densidade1, densidade2);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
    printf("Vencedor: Carta 2\n");

  } else {
     printf("\nEmpate!\n");
  }        
    
    return 0;

    }

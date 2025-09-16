#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
  
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  
  // Área para entrada de dados para primeira carta 
  
    printf("Insira os dados para a Carta 1:\n");
    printf("Estado (A-H): Alagoas ");
    scanf(" %c", &estado1);
    printf("Código da Carta: A01");
    scanf("%s", codigo1);
    printf("Nome da Cidade: Maceió");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: 3.220.000");
    scanf("%d", &populacao1);
    printf("Área : 27.768 km²");
    scanf("%f", &area1);
    printf("PIB : 27,5 bilhões de reais");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:50");
    scanf("%d", &pontosTuristicos1);

// Exibição dos dados da primeira carta
  
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
 
  // Área para entrada de dados para segunda carta 

    printf("Insira os dados para a Carta 2:\n");
    printf("Estado (A-H): Bahia");
    scanf(" %c", &estado2);
    printf("Código da Carta: B02");
    scanf("%s", codigo2);
    printf("Nome da Cidade: Salvador");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: 14.850.513");
    scanf("%d", &populacao2);
    printf("Área: 25,04 km²");
    scanf("%f", &area2);
    printf("PIB: 28,4 bilhões de reais");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:20");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 

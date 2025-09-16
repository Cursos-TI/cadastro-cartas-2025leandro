#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nome da Cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int Número de pontos Turisticos1;
  
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nome da Cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int Número de pontos Turisticos2;
  
  // Área para entrada de dados para primeira carta 
  
   
    printf("estado (A-H): Alagoas ");
    scanf(" %c", &estado1);
    printf("codigo da Carta: A01");
    scanf("%s", codigo1);
    printf("nome da Cidade: Maceió");
    scanf(" %[^\n]s", nome da Cidade1);
    printf("populacao: 3.220.000");
    scanf("%d", &populacao1);
    printf("area : 27.768 km²");
    scanf("%f", &area1);
    printf("pib : 27,5 bilhões de reais");
    scanf("%f", &pib1);
    printf("Número de pontos Turisticos:50");
    scanf("%d", &pontosTuristicos1);

// Exibição dos dados da primeira carta
  
    printf("\nCarta 1:\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("nome da Cidade: %s\n", nomeCidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f km²\n", area1);
    printf("pib: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos Turisticos: %d\n", pontosTuristicos1);
 
  // Área para entrada de dados para segunda carta 

        printf("estado (A-H): Bahia");
    scanf(" %c", &estado2);
    printf("codigo da Carta: B02");
    scanf("%s", codigo2);
    printf("nome da Cidade: Salvador");
    scanf(" %[^\n]s", nomeCidade2);
    printf("populacao: 14.850.513");
    scanf("%d", &populacao2);
    printf("area: 25,04 km²");
    scanf("%f", &area2);
    printf("pib: 28,4 bilhões de reais");
    scanf("%f", &pib2);
    printf("Número de pontos Turisticos:20");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("nome da Cidade: %s\n", nomeCidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
} 

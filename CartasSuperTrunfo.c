#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis primeira carta
  char estado_1, cidade_1[50], carta_1[10];
  int populacao_1, pontos_1;
  float area_1, PIB_1;

  // Variáveis segunda carta
  char estado_2, cidade_2[50], carta_2[10];
  int populacao_2, pontos_2;
  float area_2, PIB_2;

  // Área para entrada de dados

  // Entrada primeira carta

  printf("Qual estado da 1º carta? \n");
  scanf(" %c", &estado_1);
  printf("\n");

  printf("Qual código da 1º carta? \n");
  scanf("%s", carta_1);
  printf("\n");

  printf("Qual cidade da 1º carta? \n");
  scanf("%s", cidade_1);
  printf("\n");

  printf("Qual população da 1º carta? \n");
  scanf("%d", &populacao_1);
  printf("\n");

  printf("Qual área da 1º carta? \n");
  scanf("%f", &area_1);
  printf("\n");

  printf("Qual PIB da 1º carta? \n");
  scanf("%f", &PIB_1);
  printf("\n");

  printf("Quantos pontos turísticos tem a 1º carta? \n");
  scanf("%d", &pontos_1);
  printf("\n");

  // Entrada segunda carta

  printf("Qual estado da 2º carta? \n");
  scanf(" %c", &estado_2);
  printf("\n");

  printf("Qual código da 2º carta? \n");
  scanf("%s", carta_2);
  printf("\n");

  printf("Qual cidade da 2º carta? \n");
  scanf("%s", cidade_2);
  printf("\n");

  printf("Qual população da 2º carta? \n");
  scanf("%d", &populacao_2);
  printf("\n");

  printf("Qual área da 2º carta? \n");
  scanf("%f", &area_2);
  printf("\n");

  printf("Qual PIB da 2º carta? \n");
  scanf("%f", &PIB_2);
  printf("\n");

  printf("Quantos pontos turísticos tem a 2º carta? \n");
  scanf("%d", &pontos_2);
  printf("\n");

  // Área para exibição dos dados da cidade

  // Saida primeira carta

  printf("Carta 1: \n");
  printf("Estado: %c \n", estado_1);
  printf("Código: %s \n", carta_1);
  printf("Nome da Cidade: %s \n", cidade_1);
  printf("População: %d \n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", PIB_1);
  printf("Número de Pontos Turísticos: %d \n", pontos_1);
  printf("\n");

  // Saida segunda carta

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado_2);
  printf("Código: %s \n", carta_2);
  printf("Nome da Cidade: %s \n", cidade_2);
  printf("População: %d \n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", PIB_2);
  printf("Número de Pontos Turísticos: %d \n", pontos_2);
  printf("\n");
  
return 0;
} 
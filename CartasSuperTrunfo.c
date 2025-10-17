#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int  pontos;
  float populacao, area, PIB;
  char nome[50];

  // Área para entrada de dados
  printf("Digite o nome da cidade: ");
  scanf("%s", nome);

  printf("Digite a população da cidade: ");
  scanf("%f", &populacao);

  printf("Digite a área da cidade: ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &PIB);

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontos);

  // Área para exibição dos dados da cidade

  printf("A cidade escolhida é %s\nSua população é de, aproximadamente, %.1f milhões de habitantes \n", nome, populacao);
  printf("A área desta cidade é de %.2f km² \nSeu PIB é de R$ %.2f bilhões \n", area, PIB);
  printf("Possui mais de %d pontos turísticos \n", pontos);

return 0;
} 

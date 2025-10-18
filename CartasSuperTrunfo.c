#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int  pontos1, pontos2;
  float populacao1, populacao2, area1, area2, PIB1, PIB2, densidade1, densidade2, capita1, capita2;
  char estado1[10], estado2[10], código1[10], código2[10], nome1[50], nome2[50];

  // Área para entrada de dados
  printf("Digite o estado da cidade 1: ");
  scanf("%s", estado1);
  
  printf("Digite o código da carta da cidade 1: ");
  scanf("%s", código1);
  
  printf("Digite o nome da cidade 1: ");
  scanf("%s", nome1);

  printf("Digite a população da cidade 1 (em milhões): ");
  scanf("%f", &populacao1);

  printf("Digite a área da cidade 1 (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade 1 (em bilhões): ");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos da cidade 1: ");
  scanf("%d", &pontos1);

  densidade1 = (populacao1 * 1000000) / area1;

  capita1 = (PIB1 / populacao1) * 1000;
  
  printf("\nDigite o estado da cidade 2: ");
  scanf("%s", estado2);
  
  printf("Digite o código da carta da cidade 2: ");
  scanf("%s", código2);

  printf("Digite o nome da cidade 2: ");
  scanf("%s", nome2);

  printf("Digite a população da cidade 2 (em milhões): ");
  scanf("%f", &populacao2);

  printf("Digite a área da cidade 2 (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade 2 (em bilhões): ");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísticos da cidade 2: ");
  scanf("%d", &pontos2);
  
  densidade2 = (populacao2 * 1000000) / area2;

  capita2 = (PIB2 / populacao2) * 1000;

  // Área para exibição dos dados da cidade

  printf("\nO estado da cidade 1 é %s, o código da carta da cidade 1 é %s, a cidade 1 escolhida é %s,\nSua população é de, aproximadamente, %.1f milhões de habitantes \n", estado1, código1, nome1, populacao1);
  printf("A área desta cidade é de %.2f km², seu PIB é de R$ %.2f bilhões ", area1, PIB1);
  printf("e possui mais de %d pontos turísticos \n", pontos1);
  printf("Sua densidade populacional é de %2f hab/km² e seu PIB per capita é de R$%.2f por ano. \n", densidade1, capita1);

  printf("\nO estado da cidade 2 é %s, o código da carta da cidade 2 é %s, a cidade 2 escolhida é %s,\nSua população é de, aproximadamente, %.1f milhões de habitantes \n", estado2, código2, nome2, populacao2);
  printf("A área desta cidade é de %.2f km², seu PIB é de R$ %.2f bilhões ", area2, PIB2);
  printf("e possui mais de %d pontos turísticos \n", pontos2);
  printf("Sua densidade populacional é de %2f hab/km² e seu PIB per capita é de R$%.2f por ano. \n \n", densidade2, capita2);

return 0;
} 

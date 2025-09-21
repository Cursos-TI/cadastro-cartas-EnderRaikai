#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dad4os e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int População1, População2;
  int PT1, PT2;
  float Area1, PIB1, Area2, PIB2;
  char Estado1, Estado2;
  char CDC1[4], CDC2[4];
  char NomeC1[20], NomeC2[20];
  float densidade1, densidade2;
  float PIBpc1, PIBpc2;

  // Área para entrada de dados

  printf("Insera os valores da primeira carta: \n");

  //Embaixo esta onde se bota os dados da carta numero 1
  printf("Diga a letra do Estado: \n");
  scanf("%s", &Estado1);

  printf("Diga o codigo da carta: \n");
  scanf("%s", &CDC1);

  printf("Diga o nome da Cidade: \n");
  scanf("%s", &NomeC1);

  printf("Diga a População: \n");
  scanf("%d", &População1);

  printf("Diga a Área: \n");
  scanf("%f", &Area1);

  printf("Diga o PIB: \n");
  scanf("%f", &PIB1);

  printf("Diga o numero de pontos turisticos: \n");
  scanf("%d", &PT1);

  printf("\n"); //Todos esses são espaços em branco para ficar mais legivel na terminal

  //Insirir informações da segunda carta

  printf("Agora insira os valores da segunda carta: \n");

  printf("Diga a letra do Estado: \n");
  scanf("%s", &Estado2);

  printf("Diga o codigo da carta: \n");
  scanf("%s", &CDC2);

  printf("Diga o nome da Cidade: \n");
  scanf("%s", &NomeC2);

  printf("Diga a População: \n");
  scanf("%d", &População2);

  printf("Diga a Área: \n");
  scanf("%f", &Area2);

  printf("Diga o PIB: \n");
  scanf("%f", &PIB2);

  printf("Diga o numero de pontos turisticos: \n");
  scanf("%d", &PT2);

  // Área para exibição dos dados da cidade

  printf("\n");

  //carta 1
  printf("Carta numero um: \n");
  printf("Estado: %c \n", Estado1);
  printf("Codigo da carta: %s \n", CDC1);
  printf("Nome da cidade: %s \n", NomeC1);
  printf("População: %d \n", População1);
  printf("Área: %.2f \n", Area1);
  printf("PIB: %.2f \n", PIB1);
  printf("Numero de Pontos Turisticos: %d \n", PT1);

  //Densidade populacional e Pib Per capita da primeira carta
  densidade1 = (População1 / Area1);
  PIBpc1 = (PIB1 / População1);

  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: %e\n", PIBpc1);

  printf("\n");

  //carta 2
  printf("Carta numero dois: \n");
  printf("Estado: %c \n", Estado2);
  printf("Codigo da carta: %s \n", CDC2);
  printf("Nome da cidade: %s \n", NomeC2);
  printf("População: %d \n", População2);
  printf("Área: %.2f \n", Area2);
  printf("PIB: %.2f \n", PIB2);
  printf("Numero de Pontos Turisticos: %d \n", PT2);

  //Densidade populacional e Pib Per capita da segunda carta
  densidade2 = (População2 / Area2);
  PIBpc2 = (PIB2 / População2);

  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %e\n", PIBpc2);

return 0;
} 

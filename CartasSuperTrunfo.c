#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1[1], estado2[1];
    char codigo_carta1[5], codigo_carta2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado1);
    printf("Resposta armazenada. \n");

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo_carta1);
    printf("Resposta armazenada. \n");

    printf("O nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Resposta armazenada. \n");

    printf("O número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    printf("Resposta armazenada. \n");

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);
    printf("Resposta armazenada. \n");

    printf("O Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);
    printf("Resposta armazenada. \n");

    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos1);
    printf("Resposta armazenada. \n");

    printf("A carta 01 foi gerada: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado2);
    printf("Resposta armazenada. \n");

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo_carta2);
    printf("Resposta armazenada. \n");

    printf("O nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Resposta armazenada. \n");

    printf("O número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Resposta armazenada. \n");

    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);
    printf("Resposta armazenada. \n");

    printf("O Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);
    printf("Resposta armazenada. \n");

    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Resposta armazenada. \n");

    printf("Agora vamos seguir para a próxima carta. \n");

    printf("A carta 02 foi gerada: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

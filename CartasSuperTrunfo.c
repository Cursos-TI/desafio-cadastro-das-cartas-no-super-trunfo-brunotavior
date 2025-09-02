#include <stdio.h>

float calcular_densidade(int populacao1, float area1) {
    return populacao1 / area1;
}

float calcular_densidade2(int populacao2, float area2) {
    return populacao2 / area2;
}

int main() {
    char estado1[3], estado2[3];
    char codigo_carta1[5], codigo_carta2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    
    // Infos primeira carta

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado1);
    printf("Resposta armazenada. \n");

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo_carta1);
    printf("Resposta armazenada. \n");

    printf("O nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade1);
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

    // Chamando a função para calcular a densidade
    densidade_populacional1 = calcular_densidade(populacao1, area1);

    // Gerando a primeira carta com as informações completas

    printf("A carta 01 foi gerada: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);


    // Infos segunda carta 

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado2);
    printf("Resposta armazenada. \n");

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo_carta2);
    printf("Resposta armazenada. \n");

    printf("O nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);
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

    // Chamando a função para calcular a densidade para a segunda carta 

    densidade_populacional2 = calcular_densidade(populacao2, area2);

    // Gerando a segunda carta com as informações completas
    
    printf("A carta 02 foi gerada: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);

    return 0;
}

#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1, codigo2;
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("Carta 1\n");
    printf("Digite o estado (sigla): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta: ");
    scanf(" %c", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCarta 2\n");
    printf("Digite o estado (sigla): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta: ");
    scanf(" %c", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\nCartas inseridas com sucesso!\n");

    return 0;
}
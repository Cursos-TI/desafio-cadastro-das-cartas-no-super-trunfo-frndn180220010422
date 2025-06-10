#include <stdio.h>

int main() {
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    printf("Carta 1\n\n");

    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\nCarta 2\n\n");

    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\nCartas inseridas com sucesso!\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}

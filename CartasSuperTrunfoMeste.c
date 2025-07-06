#include <stdio.h>

int main() {
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int comparacao[8];

    printf("Carta 1\n\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf("%s", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);

    printf("\nCarta 2\n\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da cidade: "); scanf("%s", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

    comparacao[0] = (populacao1 > populacao2) ? 1 : 0;
    comparacao[1] = (area1 > area2) ? 1 : 0;
    comparacao[2] = (pib1 > pib2) ? 1 : 0;
    comparacao[3] = (pontos1 > pontos2) ? 1 : 0;
    comparacao[4] = (densidade1 < densidade2) ? 1 : 0;
    comparacao[5] = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    comparacao[6] = (super_poder1 > super_poder2) ? 1 : 0;

    printf("\nCartas inseridas com sucesso!\n");

    printf("\nComparação das Cartas:\n");
    printf("População: %d\n", comparacao[0]);
    printf("Área: %d\n", comparacao[1]);
    printf("PIB: %d\n", comparacao[2]);
    printf("Pontos turísticos: %d\n", comparacao[3]);
    printf("Densidade Populacional: %d\n", comparacao[4]);
    printf("PIB per Capita: %d\n", comparacao[5]);
    printf("Super Poder: %d\n", comparacao[6]);

    return 0;
}

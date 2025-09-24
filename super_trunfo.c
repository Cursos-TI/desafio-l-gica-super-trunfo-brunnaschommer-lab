#include <stdio.h>

int main() {
    char estado1, codigo1[4], nome1[50];
    int pop1, pontos1;
    float area1, pib1;

    char estado2, codigo2[4], nome2[50];
    int pop2, pontos2;
    float area2, pib2;

    printf("Carta 1:\n");
    scanf(" %c", &estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", nome1);
    scanf("%d", &pop1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    printf("Carta 2:\n");
    scanf(" %c", &estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", nome2);
    scanf("%d", &pop2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}

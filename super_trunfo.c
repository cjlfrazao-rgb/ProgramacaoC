#include <stdio.h>

int main() {
    // Carta 1
    char ESTADO1;
    char CODIGO1[4];
    char CIDADE1[50];
    int POPULACAO1;
    float AREA1;
    float PIB1;
    int NUMERO_PONTOS_TURISTICOS1;

    // Entrada de dados da carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &ESTADO1);

    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", CODIGO1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", CIDADE1);  // lê até o ENTER

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &POPULACAO1);

    printf("Digite a area da carta 1 (em km²): ");
    scanf("%f", &AREA1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &NUMERO_PONTOS_TURISTICOS1);

    // Exibição da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", ESTADO1);
    printf("Codigo: %s\n", CODIGO1);
    printf("Cidade: %s\n", CIDADE1);
    printf("Populacao: %d\n", POPULACAO1);
    printf("Area: %.2f km²\n", AREA1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", NUMERO_PONTOS_TURISTICOS1);

    // =============================================
    // Repetir o mesmo para a carta 2
    // =============================================

    char ESTADO2;
    char CODIGO2[4];
    char CIDADE2[50];
    int POPULACAO2;
    float AREA2;
    float PIB2;
    int NUMERO_PONTOS_TURISTICOS2;

    printf("\nDigite o estado da carta 2 (A-H): ");
    scanf(" %c", &ESTADO2);

    printf("Digite o codigo da carta 2 (ex: B03): ");
    scanf("%s", CODIGO2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", CIDADE2);

    printf("Digite a populacao da carta 2: ");
    scanf("%d", &POPULACAO2);

    printf("Digite a area da carta 2 (em km²): ");
    scanf("%f", &AREA2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &NUMERO_PONTOS_TURISTICOS2);

    // Exibição da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", ESTADO2);
    printf("Codigo: %s\n", CODIGO2);
    printf("Cidade: %s\n", CIDADE2);
    printf("Populacao: %d\n", POPULACAO2);
    printf("Area: %.2f km²\n", AREA2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", NUMERO_PONTOS_TURISTICOS2);

    return 0;
}
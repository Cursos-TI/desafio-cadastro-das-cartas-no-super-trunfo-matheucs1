#include <stdio.h>

//carta 1 e 2 separadas
int main() {
    char estado1, codigo[50], nomeCidade[50];
    int populacao;
    float area, pib;
    int pontosTuristicos;
    float densidade, pibPerCapita;


    char estado2, codigo2[50], nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    //Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite a letra do estado de A-H: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta de 01-04 com o mesmo codigo do estado(ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade); // Lê o nome da cidade mesmo com espaço até a quebra de linha

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²) não e necessário incluir o km²: "); // Digitar não sendo necessário incluir o km²
    scanf("%f", &area);

    printf("PIB do estado: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    //Cálculo do pib e area
    densidade = populacao / area;
    pibPerCapita = (pib * 1000000000) / populacao;// Convertendo o pib para reais


    // Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite a letra do estado de A-H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta de 01-04 com o mesmo codigo do estado(ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²) não e necessário incluir o km²: ");
    scanf("%f", &area2);

    printf("PIB do estado: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;// Convertendo o pib para reais

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade);
    printf("Pib per capita: %.2f reais\n", pibPerCapita);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("Pib per capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
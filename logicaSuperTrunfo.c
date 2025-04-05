#include <stdio.h>
#include <string.h>

int main() {
    // Dados das cartas
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float PIBperCapita1, PIBperCapita2;

    // Entrada de dados para as duas cidades
    printf("Cadastro da Primeira Cidade:\n");
    printf("Nome: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (R$): ");
    scanf("%f", &PIB1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Segunda Cidade:\n");
    printf("Nome: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (R$): ");
    scanf("%f", &PIB2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    PIBperCapita1 = PIB1 / populacao1;
    PIBperCapita2 = PIB2 / populacao2;
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Exibição dos atributos para escolha
    int escolha1, escolha2;
    float valor1A = 0, valor2A = 0, valor1B = 0, valor2B = 0;
    char atributo1[30], atributo2[30];

    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");
    printf("5. Pontos Turísticos\n");
    printf("6. Densidade Populacional\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    // Menu dinâmico para segunda escolha
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == escolha1) continue;
        switch (i) {
            case 1: printf("1. População\n"); break;
            case 2: printf("2. Área\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. PIB per Capita\n"); break;
            case 5: printf("5. Pontos Turísticos\n"); break;
            case 6: printf("6. Densidade Populacional\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &escolha2);

    // Atribuição dos valores do primeiro atributo
    switch (escolha1) {
        case 1: valor1A = populacao1; valor2A = populacao2; strcpy(atributo1, "População"); break;
        case 2: valor1A = area1; valor2A = area2; strcpy(atributo1, "Área"); break;
        case 3: valor1A = PIB1; valor2A = PIB2; strcpy(atributo1, "PIB"); break;
        case 4: valor1A = PIBperCapita1; valor2A = PIBperCapita2; strcpy(atributo1, "PIB per Capita"); break;
        case 5: valor1A = pontosTuristicos1; valor2A = pontosTuristicos2; strcpy(atributo1, "Pontos Turísticos"); break;
        case 6: valor1A = densidade1; valor2A = densidade2; strcpy(atributo1, "Densidade Populacional"); break;
    }

    // Atribuição dos valores do segundo atributo
    switch (escolha2) {
        case 1: valor1B = populacao1; valor2B = populacao2; strcpy(atributo2, "População"); break;
        case 2: valor1B = area1; valor2B = area2; strcpy(atributo2, "Área"); break;
        case 3: valor1B = PIB1; valor2B = PIB2; strcpy(atributo2, "PIB"); break;
        case 4: valor1B = PIBperCapita1; valor2B = PIBperCapita2; strcpy(atributo2, "PIB per Capita"); break;
        case 5: valor1B = pontosTuristicos1; valor2B = pontosTuristicos2; strcpy(atributo2, "Pontos Turísticos"); break;
        case 6: valor1B = densidade1; valor2B = densidade2; strcpy(atributo2, "Densidade Populacional"); break;
    }

    // Comparações e soma
    int pontos1 = 0, pontos2 = 0;

    // Atributo 1
    if (escolha1 == 6) { // Densidade: menor vence
        if (valor1A < valor2A) pontos1++;
        else if (valor2A < valor1A) pontos2++;
    } else {
        if (valor1A > valor2A) pontos1++;
        else if (valor2A > valor1A) pontos2++;
    }

    // Atributo 2
    if (escolha2 == 6) { // Densidade: menor vence
        if (valor1B < valor2B) pontos1++;
        else if (valor2B < valor1B) pontos2++;
    } else {
        if (valor1B > valor2B) pontos1++;
        else if (valor2B > valor1B) pontos2++;
    }

    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    printf("\n\nResultado da Comparação:\n");
    printf("Cidade 1: %s\n", nome1);
    printf("%s: %.2f\n", atributo1, valor1A);
    printf("%s: %.2f\n", atributo2, valor1B);
    printf("Soma: %.2f\n", soma1);

    printf("\nCidade 2: %s\n", nome2);
    printf("%s: %.2f\n", atributo1, valor2A);
    printf("%s: %.2f\n", atributo2, valor2B);
    printf("Soma: %.2f\n", soma2);

    printf("\nVencedor da Rodada: ");
    if (soma1 > soma2) {
        printf("%s\n", nome1);
    } else if (soma2 > soma1) {
        printf("%s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    // Variáveis para o menu
    int opcao;
    
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
//executando as opções do menu
    switch (opcao) {
        case 1: {
            char codigo1[10], codigo2[10];
            char nome1[30], nome2[30];
            int populacao1, populacao2;
            float area1, area2;
            float PIB1, PIB2;
            int numeroturistico1, numeroturistico2;
            float densidade1, densidade2;
            float PIBpercapta1, PIBpercapta2;
 // Entrada de dados para a primeira carta:
            printf("Cadastro da primeira carta:\n");
            printf("Digite o Codigo da Cidade:\n");
            scanf("%s", codigo1);
            printf("Digite o Nome da Cidade:\n");
            scanf("%s", nome1);
            printf("Digite a populacao da cidade:\n");
            scanf("%d", &populacao1);
            printf("Digite a area da cidade em Km2: ");
            scanf("%f", &area1);
            printf("Digite o PIB da cidade em R$: ");
            scanf("%f", &PIB1);
            printf("Digite o numero de pontos turisticos da cidade: ");
            scanf("%d", &numeroturistico1);

            // Cálculo dos valores derivados para a primeira carta
            PIBpercapta1 = PIB1 / populacao1;
            densidade1 = populacao1 / area1;

            // Entrada de dados para a segunda carta
            printf("\nCadastro da segunda carta:\n");
            printf("Digite o Codigo da Cidade: ");
            scanf("%s", codigo2);
            printf("Digite o Nome da Cidade: ");
            scanf("%s", nome2);
            printf("Digite a populacao da cidade: ");
            scanf("%d", &populacao2);
            printf("Digite a area da cidade em Km2: ");
            scanf("%f", &area2);
            printf("Digite o PIB da cidade em R$: ");
            scanf("%f", &PIB2);
            printf("Digite o numero de pontos turisticos da cidade: ");
            scanf("%d", &numeroturistico2);

            // Cálculo dos valores derivados para a segunda carta
            PIBpercapta2 = PIB2 / populacao2;
            densidade2 = populacao2 / area2;

            // Exibição dos dados das cartas
            printf("\n\nDados da Primeira Carta:\n");
            printf("Codigo: %s\n", codigo1);
            printf("Nome: %s\n", nome1);
            printf("Populacao: %d habitantes\n", populacao1);
            printf("Area: %.2f km2\n", area1);
            printf("PIB: R$ %.2f\n", PIB1);
            printf("Numero de Pontos Turisticos: %d\n", numeroturistico1);
            printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
            printf("PIB per Capita: R$ %.2f\n", PIBpercapta1);

            printf("\nDados da Segunda Carta:\n");
            printf("Codigo: %s\n", codigo2);
            printf("Nome: %s\n", nome2);
            printf("Populacao: %d habitantes\n", populacao2);
            printf("Area: %.2f km2\n", area2);
            printf("PIB: R$ %.2f\n", PIB2);
            printf("Numero de Pontos Turisticos: %d\n", numeroturistico2);
            printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
            printf("PIB per Capita: R$ %.2f\n", PIBpercapta2);

             // Comparação entre as cartas
    printf("\n\nResultados das Comparações:\n");

    // Comparação de Densidade Populacional (Menor valor vence)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Vencedora: %s (%.2f hab/km²)\n", nome1, densidade1);
    } else if (densidade2 < densidade1) {
        printf("Vencedora: %s (%.2f hab/km²)\n", nome2, densidade2);
    } else {
        printf("Empate (%.2f hab/km²)\n", densidade1);
    }

    // Comparação de PIB (Maior valor vence)
    printf("PIB Total: ");
    if (PIB1 > PIB2) {
        printf("Vencedora: %s (R$ %.2f)\n", nome1, PIB1);
    } else if (PIB2 > PIB1) {
        printf("Vencedora: %s (R$ %.2f)\n", nome2, PIB2);
    } else {
        printf("Empate (R$ %.2f)\n", PIB1);
    }

    // Comparação de PIB per Capita (Maior valor vence)
    printf("PIB per Capita: ");
    if (PIBpercapta1 > PIBpercapta2) {
        printf("Vencedora: %s (R$ %.2f)\n", nome1, PIBpercapta1);
    } else if (PIBpercapta2 > PIBpercapta1) {
        printf("Vencedora: %s (R$ %.2f)\n", nome2, PIBpercapta2);
    } else {
        printf("Empate (R$ %.2f)\n", PIBpercapta1);
    }

    // Comparação de Pontos Turísticos (Maior valor vence)
    printf("Número de Pontos Turísticos: ");
    if (numeroturistico1 > numeroturistico2) {
        printf("Vencedora: %s (%d pontos turísticos)\n", nome1, numeroturistico1);
    } else if (numeroturistico2 > numeroturistico1) {
        printf("Vencedora: %s (%d pontos turísticos)\n", nome2, numeroturistico2);
    } else {
        printf("Empate (%d pontos turísticos)\n", numeroturistico1);
    }
            break;
        }
        case 2:
            printf("Veja as regras do jogo\n");
            break;
        case 3:
            printf("Obrigado por jogar!\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente\n");
            break;
    }
    return 0;
}

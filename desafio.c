#include <stdio.h>
#include <string.h>

int main() {
    char nomeEstado[50], nomeEstado2[50];
    float populacao, populacao2, area, area2, pib, pib2, densidade, densidade2;
    int pontosTuristicos, pontosTuristicos2;
    int atributo1, atributo2;

    // Pegando os dados da cidade 1
    printf("Digite o nome da cidade 1: ");
    fgets(nomeEstado, sizeof(nomeEstado), stdin);
    nomeEstado[strcspn(nomeEstado, "\n")] = 0;  // Remove o caractere de nova linha, caso exista

    printf("Digite a população da cidade 1: ");
    scanf("%f", &populacao);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos);

    densidade = populacao / area;

    getchar();  // Limpar o buffer após usar scanf

    // Pegando os dados da cidade 2
    printf("\nDigite o nome da cidade 2: ");
    fgets(nomeEstado2, sizeof(nomeEstado2), stdin);
    nomeEstado2[strcspn(nomeEstado2, "\n")] = 0;

    printf("Digite a população da cidade 2: ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    getchar();  // Limpar o buffer após usar scanf

    // Exibindo os dados da cidade 2
    printf("\nDados cadastrados para a cidade 2:\n");
    printf("Nome: %s\n", nomeEstado2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade demográfica: %.2f\n", densidade2);
    printf("---------------------------------------------\n");

    // Menu de comparação para o primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &atributo1);

    // Menu de comparação para o segundo atributo
    printf("\nEscolha o segundo atributo para comparar (não pode ser o mesmo que o primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &atributo2);

    // Verificando se o jogador selecionou o mesmo atributo duas vezes
    if (atributo1 == atributo2) {
        printf("Erro: você não pode selecionar o mesmo atributo duas vezes!\n");
        return 1; // Encerra o programa em caso de erro
    }

    // Comparação do primeiro atributo
    float valor1 = 0, valor2 = 0;
    switch (atributo1) {
        case 1: valor1 = populacao; break;
        case 2: valor1 = area; break;
        case 3: valor1 = pib; break;
        case 4: valor1 = pontosTuristicos; break;
        case 5: valor1 = densidade; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor2 = populacao2; break;
        case 2: valor2 = area2; break;
        case 3: valor2 = pib2; break;
        case 4: valor2 = pontosTuristicos2; break;
        case 5: valor2 = densidade2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Comparação do primeiro atributo
    printf("\nComparando os atributos escolhidos:\n");
    if (valor1 > valor2) {
        printf("%s vence no primeiro atributo.\n", nomeEstado);
    } else if (valor1 < valor2) {
        printf("%s vence no primeiro atributo.\n", nomeEstado2);
    } else {
        printf("Empate no primeiro atributo!\n");
    }

    // Comparação do segundo atributo
    valor1 = valor2 = 0; // resetando os valores para o segundo atributo
    switch (atributo1) {
        case 1: valor1 = populacao; break;
        case 2: valor1 = area; break;
        case 3: valor1 = pib; break;
        case 4: valor1 = pontosTuristicos; break;
        case 5: valor1 = densidade; break;
    }

    switch (atributo2) {
        case 1: valor2 = populacao2; break;
        case 2: valor2 = area2; break;
        case 3: valor2 = pib2; break;
        case 4: valor2 = pontosTuristicos2; break;
        case 5: valor2 = densidade2; break;
    }

    if (valor1 > valor2) {
        printf("%s vence no segundo atributo.\n", nomeEstado);
    } else if (valor1 < valor2) {
        printf("%s vence no segundo atributo.\n", nomeEstado2);
    } else {
        printf("Empate no segundo atributo!\n");
    }

    // Soma dos valores para decidir o vencedor final
    float soma1 = valor1 + valor2;
    float soma2 = valor1 + valor2;

    if (soma1 > soma2) {
        printf("%s vence a rodada com a maior soma!\n", nomeEstado);
    } else if (soma1 < soma2) {
        printf("%s vence a rodada com a maior soma!\n", nomeEstado2);
    } else {
        printf("Empate na soma dos atributos!\n");
    }

    return 0;
}


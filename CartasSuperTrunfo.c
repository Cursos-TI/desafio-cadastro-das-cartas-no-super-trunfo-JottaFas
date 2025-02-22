#include <stdio.h>

int main() {
    int carta, pturisticos, populacao;
    char estado;
    char codigo[4];
    char nomecidade[100];
    float area, pib;

    printf("Digite o número da carta: \n");
    scanf("%d", &carta);

    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%3s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomecidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos);

    printf("\nCarta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturisticos);

    return 0;
}

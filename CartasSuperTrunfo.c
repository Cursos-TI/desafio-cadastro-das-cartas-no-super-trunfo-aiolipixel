#include <stdio.h>

int main(){
    char estado1, estado2;
    char cod1[50], cod2[50];
    char cidade1[50], cidade2[50];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    printf("Bem-vindo ao Super-Trunfo Países! \n");
    printf("Vamos iniciar o jogo cadastrando as cartas: \n");
    printf("Defina, a seguir, as características da Carta 1: \n");

    printf("Insira o Estado: ");
    scanf(" %c", &estado1);
    printf("Insira o código da carta: ");
    scanf("%s", cod1);
    printf("Insira a Cidade: ");
    scanf("%s", cidade1);
    printf("Insira o número populacional: ");
    scanf("%d", &pop1);
    printf("Insira a área territorial em km²: ");
    scanf("%f", &area1);
    printf("Insira o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("Defina, a seguir, as características da Carta 2: \n");

    printf("Insira o Estado: ");
    scanf(" %c", &estado2);
    printf("Insira o código da carta: ");
    scanf("%s", cod2);
    printf("Insira a Cidade: ");
    scanf("%s", cidade2);
    printf("Insira o número populacional: ");
    scanf("%d", &pop2);
    printf("Insira a área territorial em km²: ");
    scanf("%f", &area2);
    printf("Insira o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &turismo2);
  
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área territorial em km²: %.2f\n", area1);
    printf("PIB (em bilhões de reais): %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área territorial em km²: %.2f\n", area2);
    printf("PIB (em bilhões de reais): %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
 

    return 0;


}
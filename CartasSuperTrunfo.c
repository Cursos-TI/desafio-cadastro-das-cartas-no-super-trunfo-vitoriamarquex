#include <stdio.h>

int main() {

    char estado[50], estado02[50];
    char codigo[50], codigo02[50];
    char nome[100], nome02[100];
    int populacao, populacao02;
    float area, area02;
    float pib, pib02;   
    int numeros, numeros02;

 //RECEBENDO OS DADOS DA CARTA 01
    printf ("Insira os dados da carta 01\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", estado);

    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigo);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numeros);

    //RECEBENDO OS DADOS DA CARTA 02
    printf ("\nInsira os dados da carta 02\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", estado02);

    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigo02);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome02);

    printf("Digite a populacao: ");
    scanf("%d", &populacao02);

    printf("Digite a area da cidade: ");
    scanf("%f", &area02);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numeros02);

    // Exibe os dados inseridos da carta01
    printf("\n---INFORMAÇÕES DA CARTA01 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", numeros);

     // Exibe os dados inseridos da carta02
     printf("\n\n---INFORMAÇÕES DA CARTA02 ---\n");
     printf("Estado: %s\n", estado02);
     printf("Codigo: %s\n", codigo02);
     printf("Cidade: %s\n", nome02);
     printf("Populacao: %d\n", populacao02);
     printf("Area: %.2f km²\n", area02);
     printf("PIB: R$ %.2f\n", pib02);
     printf("Pontos Turisticos: %d\n", numeros02);

    return 0;
}

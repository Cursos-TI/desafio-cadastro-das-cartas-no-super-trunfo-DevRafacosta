#include <stdio.h>

int main() {
    
    //carta 1

    char letra;
    char cidade[50];
    char codigo;
    int populacao;
    float km;
    float pib;
    int pontosturisticos;

    printf("Vamos preencher os dados da carta 1: \n");

    printf("Digite uma letra de A - H: ");
    scanf(" %c", &letra);

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade);

    printf("Digite o codigo da carta de 1 a 4: ");
    scanf(" %c", &codigo);

    printf("Qual é o numero de habitantes? ");
    scanf("%d", &populacao);

    printf("Qual é o numero de km²? ");
    scanf("%f", &km);

    printf("Qual é o pib da cidade? ");
    scanf("%f", &pib);

    printf("A cidade tem quantos pontos turisticos? ");
    scanf("%d", &pontosturisticos);

    printf("Ok, agora vamos preencher os dados da carta 2: \n");

    //carta 2

    char letra2;
    char cidade2[50];
    char codigo2;
    int populacao2;
    float km2;
    float pib2;
    int pontosturisticos2;

    printf("Digite uma letra de A - H: ");
    scanf(" %c", &letra2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2);

    printf("Digite o codigo da carta de 1 a 4: ");
    scanf(" %c", &codigo2);

    printf("Qual é o numero de habitantes? ");
    scanf("%d", &populacao2);

    printf("Qual é o numero de km²? ");
    scanf("%f", &km);

    printf("Qual é o pib da cidade? ");
    scanf("%f", &pib2);

    printf("A cidade tem quantos pontos turisticos? ");
    scanf("%d", &pontosturisticos2);


    //imprimindo os dados da carta 1
    printf("\n\nCarta 1:\n");
    printf("--------------------\n");
    printf("Letra: %c\n", letra);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Código da Carta: %c\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", km);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    
    //imprimindo os dados da carta 2
    printf("\n\nCarta 2:g\n");
    printf("--------------------\n");
    printf("Letra: %c\n", letra2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Código da Carta: %c\n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}

#include <stdio.h>

int main()
{
    printf("\n=S=u=P=e=R==T=r=U=N=F=o==G=A=M=E=\n");
    printf("\nBem-vindo ao jogo Super Trunfo!\n");
    printf("Para comecar, preencha todos os dados solicitados para criar suas cartas.\n");

    printf("\nCada carta tera os seguintes atributos:\n");
    printf("   - Estado (Sigla)\n");
    printf("   - Codigo (1 letra + 2 numeros de 01 a 04) - ex: A01\n");
    printf("   - Nome da cidade\n");
    printf("   - Populacao\n");
    printf("   - Area (em quilometros quadrados)\n");
    printf("   - PIB (em bilhoes de reais)\n");
    printf("   - Numero de pontos turisticos\n");

    printf(
        "\nExemplo de preenchimento de carta:\n"
        "-----------------------------------\n"
        "Estado: CE\n"
        "Codigo: A01\n"
        "Nome da cidade: Fortaleza\n"
        "Populacao: 180000\n"
        "Area: 155.00 km2\n"
        "PIB: 3.25 bilhoes de reais\n"
        "Numero de pontos turisticos: 5\n"
        "Pronto! Agora e so jogar!\n"
        "-----------------------------------\n");

    // Exibe o titulo da carta
    printf("\nPrimeira Carta\n");

    // Declara as variaveis para armazenar os dados da carta
    char estado1[3];               // Sigla do estado (2 letras + '\0')
    char codigo1[4];               // Codigo no formato A01 (1 letra + 2 numeros + '\0')
    char nome_cidade1[50];         // Nome da cidade
    int populacao1;                // Populacao da cidade
    float area1;                   // Area em km2
    float pib1;                    // PIB em bilhoes de reais
    int numero_pontos_turisticos1; // Numero de pontos turisticos

    // Coleta os dados do usuario
    printf("Estado: ");
    scanf(" %2s", estado1); // Limita a entrada a 2 caracteres
    getchar();              // Limpa o buffer do teclado

    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo1); // Limita a entrada a 3 caracteres
    getchar();

    printf("Nome da cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // Lê a linha inteira, incluindo espacos

    printf("Populacao: ");
    scanf("%d", &populacao1); // Lê um inteiro

    printf("Area (Em quilometros quadrados): ");
    scanf("%f", &area1); // Lê um float

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1); // Lê um float

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos1); // Lê um inteiro

    // Exibe os dados da carta formatados
    printf("\nCarta 1 - Dados Informados:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s", nome_cidade1); // fgets inclui o \n automaticamente
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticos1);

    printf("\nCarta 1 criada com sucesso!\n");
    printf("\nAgora, crie a segunda carta!\n");
    printf("\n=============================\n");

    printf("\nSegunda Carta\n");
    char estado2[3];
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    printf("Estado: ");
    scanf(" %2s", estado2);
    getchar();
    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo2);
    getchar();
    printf("Nome da cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (Em quilometros quadrados): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos2);
    printf("\nCarta 2 - Dados Informados:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticos2);
    printf("\nCarta 2 criada com sucesso!\n");
    printf("\nAmbas as cartas foram criadas com sucesso!\n");
    printf("\n=============================\n");
    printf("\n=S=u=P=e=R==T=r=U=N=F=o==G=A=M=E=\n");
    printf("\nDesenvolvido por Nicolinux\n");

    return 0;
}
#include <stdio.h>

int main()
{
    // ==============================
    // Título e introdução do jogo
    // ==============================
    printf("\n=S=u=P=e=R==T=r=U=N=F=o==G=A=M=E=\n");
    printf("\nBem-vindo ao jogo Super Trunfo!\n");
    printf("Para comecar, preencha todos os dados solicitados para criar suas cartas.\n");

    // Apresenta os atributos que cada carta deve ter
    printf("\nCada carta tera os seguintes atributos:\n");
    printf("   - Estado (Sigla)\n");
    printf("   - Codigo (1 letra de A a H + 2 numeros de 01 a 04) - ex: A01\n");
    printf("   - Nome da cidade\n");
    printf("   - Populacao\n");
    printf("   - Area (em quilometros quadrados)\n");
    printf("   - PIB (em bilhoes de reais)\n");
    printf("   - Numero de pontos turisticos\n");

    // Exemplo ilustrativo para orientar o usuário
    printf(
        "\nExemplo de preenchimento de carta:\n"
        "-----------------------------------\n"
        "Estado: CE\n"
        "Codigo: C01\n"
        "Nome da cidade: Fortaleza\n"
        "Populacao: 180000\n"
        "Area: 155.00 \n"
        "PIB: 3.25\n"
        "Numero de pontos turisticos: 5\n"
        
        /* As três métricas abaixo (densidade populacional, PIB per capita e Super Poder) 
        foram adicionadas posteriormente para aumentar a complexidade do projeto,  
        conforme pedido do professor. Elas serão calculadas automaticamente pelo programa.*/
        "O valor do PIB per capita, Densidade populacional e o Super Poder serão calculados automaticamente!\n"
        "-----------------------------------\n"
        "Pronto! Agora e so jogar!\n"
    );

    // ==============================
    // Cadastro da PRIMEIRA CARTA
    // ==============================
    printf("\nPrimeira Carta\n");

    // Declaração das variáveis da primeira carta
    char estado1[3];               // Sigla do estado (2 caracteres + '\0')
    char codigo1[4];               // Código da carta (ex: A01)
    char nome_cidade1[121];         // Nome da cidade
    unsigned long int populacao1;  // População da cidade
    float area1;                   // Área da cidade em km²
    float pib1;                    // PIB da cidade (em bilhões de reais)
    int numero_pontos_turisticos1; // Quantidade de pontos turísticos
    float densidade_populacional1; // Resultado da população dividida pela área
    float pib_per_capita1;         // Resultado do PIB dividido pela população
    float super_poder1;            // Soma de todos os atributos para definir o "super poder" da carta

    // Coleta dos dados informados pelo usuário
    printf("Estado: ");
    scanf(" %2s", estado1); // Lê até 2 caracteres
    getchar();              // Remove o '\n' deixado no buffer

    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo1); // Lê até 3 caracteres
    getchar();

    printf("Nome da cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // Lê a linha inteira, incluindo espaços

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (Em quilometros quadrados): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos1);

    
    // Exibição final dos dados da primeira carta
    printf("\nCarta 1 - Dados Informados:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s", nome_cidade1); 
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticos1);

    // Cálculo das métricas derivadas
    densidade_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade_populacional1);
    pib_per_capita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1/densidade_populacional1) + numero_pontos_turisticos1 ;
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\nCarta 1 criada com sucesso!\n");
    printf("\nAgora, crie a segunda carta!\n");
    printf("\n=============================\n");

    // ==============================
    // Cadastro da SEGUNDA CARTA
    // ==============================
    printf("\nSegunda Carta\n");

    // Declaração das variáveis da segunda carta
    char estado2[3];
    char codigo2[4];
    char nome_cidade2[121];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada de dados da segunda carta
    printf("Estado: ");
    scanf(" %2s", estado2);
    getchar();

    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo2);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (Em quilometros quadrados): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    
    // Exibição final dos dados da segunda carta
    printf("\nCarta 2 - Dados Informados:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticos2);
    
    // Cálculo das métricas da segunda carta
    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade_populacional2);
    pib_per_capita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    super_poder2 = (float)populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_populacional2) + numero_pontos_turisticos2;
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\nCarta 2 criada com sucesso!\n");
    printf("\nAmbas as cartas foram criadas com sucesso!\n");
    printf("\n=============================\n");
    printf("\nAgora, vamos comparar as cartas. Prepare-se para a batalha!\n");
    printf("\n=============================\n");

    // ==============================
    // Comparação das cartas
    // ==============================
    printf("\nComparacao das Cartas:\n");
    int vencedor_populacao = populacao1 > populacao2;
    printf("Vencedor em Populacao: Carta %d\n", vencedor_populacao);

    int vencedor_area = area1 > area2;
    printf("Vencedor em Area: Carta %d\n", vencedor_area);

    int vencedor_pib = pib1 > pib2;
    printf("Vencedor em PIB: Carta %d\n", vencedor_pib);

    int vencedor_pontos_turisticos = numero_pontos_turisticos1 > numero_pontos_turisticos2;
    printf("Vencedor em Pontos Turisticos: Carta %d\n", vencedor_pontos_turisticos);

    int vencedor_densidade_populacional = densidade_populacional1 < densidade_populacional2;
    printf("Vencedor em Densidade Populacional (menor = melhor): Carta %d\n", vencedor_densidade_populacional);

    int vencedor_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    printf("Vencedor em PIB per Capita: Carta %d\n", vencedor_pib_per_capita);

    int vencedor_super_poder = super_poder1 > super_poder2;
    printf("Vencedor em Super Poder: Carta %d\n", vencedor_super_poder);
    printf("\n=============================\n");

    printf("Se o resultado for 0, significa que a Carta 2 venceu!\n");
    printf("Se o resultado for 1, significa que a Carta 1 venceu!\n");
    printf("\n=============================\n");

    // Mensagem final e créditos
    printf("\n=S=u=P=e=R==T=r=U=N=F=o==G=A=M=E=\n");
    printf("\nDesenvolvido por Nicolinux\n");

    return 0;
}

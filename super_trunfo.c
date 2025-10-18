/*
 * Desafio: Nível Mestre - Super Trunfo em C
 *
 * Implementação de comparações avançadas entre cartas de países
 * utilizando dois atributos numéricos selecionados pelo jogador.
 *
 * Funcionalidades:
 * - Escolha de dois atributos distintos para comparação
 * - Comparação individual de atributos (maior vence, exceto densidade demográfica)
 * - Soma dos atributos para determinar vencedor da rodada
 * - Tratamento de empates
 * - Menus dinâmicos com switch
 * - Exibição clara do resultado com nomes dos países, valores dos atributos,
 *   soma e vencedor
 *
 * Requisitos não funcionais:
 * - Interface intuitiva e fácil de usar
 * - Código bem estruturado e comentado
 * - Tratamento de entradas inválidas
 *
 * Simplificação:
 * - Usa cartas pré-cadastradas
 * - Comparação feita entre apenas duas cartas
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_NOME_PAIS       50
#define MAX_NOME_ESTADO     30
#define MAX_CODIGO_CARTA    5
#define MAX_NOME_CIDADE     80
#define MAX_BUFFER_NUMERICO 21

typedef struct Carta {
    char nome_pais[MAX_NOME_PAIS];
    char nome_estado[MAX_NOME_ESTADO];              
    char codigo_carta[MAX_CODIGO_CARTA];            
    char nome_cidade[MAX_NOME_CIDADE];  
    long long int populacao;  
    int numero_pontos_turisticos; 
    double area;                  
    double pib;                   
    double densidade_populacional; 
    double pib_per_capita;         
    double super_poder;    
} Carta;

// Retorna o valor do atributo selecionado
double pegar_valor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.numero_pontos_turisticos;
        case 5: return c.densidade_populacional;
        case 6: return c.pib_per_capita;
        case 7: return c.super_poder;
        default: return 0; 
    }
}

// Retorna o nome do atributo para exibição
const char* nome_atributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Populacional";
        case 6: return "PIB per Capita";
        case 7: return "Super Poder";
        default: return "Desconhecido";
    }
}

// Compara os atributos individuais usando ternário
void comparar_atributo(Carta c1, Carta c2, int atributo) {
    double valor1 = pegar_valor(c1, atributo);
    double valor2 = pegar_valor(c2, atributo);
    printf("\nComparando atributo: %s\n", nome_atributo(atributo));
    printf("%s: %.2f\n", c1.nome_cidade, valor1);
    printf("%s: %.2f\n", c2.nome_cidade, valor2);

    if (atributo == 5)  // densidade populacional, menor vence
        printf("Resultado: %s\n", (valor1 < valor2) ? c1.nome_cidade : (valor2 < valor1) ? c2.nome_cidade : "Empate");
    else // maior vence
        printf("Resultado: %s\n", (valor1 > valor2) ? c1.nome_cidade : (valor2 > valor1) ? c2.nome_cidade : "Empate");
}

// Exibe o menu dinâmico para seleção do segundo atributo
void exibir_menu_segundo(int atributo1) {
    printf("\nEscolha o segundo atributo (diferente de %s):\n", nome_atributo(atributo1));
    for (int i = 1; i <= 7; i++) {
        if (i != atributo1) {
            printf("%d - %s\n", i, nome_atributo(i));
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    Carta cartas[2];
    char buffer[MAX_BUFFER_NUMERICO];

    // ================= Cadastro das cartas =================
    for (int i = 0; i < 2; i++) {
        printf("\n=== Cadastro da Carta %d ===\n", i+1);
        printf("Nome do país: ");
        fgets(cartas[i].nome_pais, MAX_NOME_PAIS, stdin);
        cartas[i].nome_pais[strcspn(cartas[i].nome_pais, "\n")] = '\0';

        printf("Estado: ");
        fgets(cartas[i].nome_estado, MAX_NOME_ESTADO, stdin);
        cartas[i].nome_estado[strcspn(cartas[i].nome_estado, "\n")] = '\0';

        printf("Código da carta: ");
        fgets(cartas[i].codigo_carta, MAX_CODIGO_CARTA, stdin);
        cartas[i].codigo_carta[strcspn(cartas[i].codigo_carta, "\n")] = '\0';

        printf("Nome da cidade: ");
        fgets(cartas[i].nome_cidade, MAX_NOME_CIDADE, stdin);
        cartas[i].nome_cidade[strcspn(cartas[i].nome_cidade, "\n")] = '\0';

        printf("População: ");
        fgets(buffer, sizeof(buffer), stdin);
        cartas[i].populacao = atoll(buffer);

        printf("Área: ");
        fgets(buffer, sizeof(buffer), stdin);
        cartas[i].area = atof(buffer);

        printf("PIB: ");
        fgets(buffer, sizeof(buffer), stdin);
        cartas[i].pib = atof(buffer);

        printf("Número de pontos turísticos: ");
        fgets(buffer, sizeof(buffer), stdin);
        cartas[i].numero_pontos_turisticos = atoi(buffer);

        // Atributos derivados
        cartas[i].densidade_populacional = cartas[i].populacao / cartas[i].area;
        cartas[i].pib_per_capita = cartas[i].pib / cartas[i].populacao;
        cartas[i].super_poder = cartas[i].populacao + cartas[i].area + cartas[i].pib + cartas[i].pib_per_capita + (1.0 / cartas[i].densidade_populacional) + cartas[i].numero_pontos_turisticos;

        printf("Carta %d cadastrada com sucesso!\n", i+1);
    }

    // ================= Seleção de atributos =================
    int atributo1, atributo2;
    printf("\nEscolha o primeiro atributo (1-7):\n");
    for (int i = 1; i <= 7; i++)
        printf("%d - %s\n", i, nome_atributo(i));
    scanf("%d", &atributo1);
    while (atributo1 < 1 || atributo1 > 7) {
        printf("Atributo inválido. Escolha novamente: ");
        scanf("%d", &atributo1);
    }

    exibir_menu_segundo(atributo1);
    scanf("%d", &atributo2);
    while (atributo2 < 1 || atributo2 > 7 || atributo2 == atributo1) {
        printf("Atributo inválido ou repetido. Escolha novamente: ");
        exibir_menu_segundo(atributo1);
        scanf("%d", &atributo2);
    }

    // ================= Comparação =================
    printf("\n================ Comparação =================\n");
    comparar_atributo(cartas[0], cartas[1], atributo1);
    comparar_atributo(cartas[0], cartas[1], atributo2);

    double soma1 = pegar_valor(cartas[0], atributo1) + pegar_valor(cartas[0], atributo2);
    double soma2 = pegar_valor(cartas[1], atributo1) + pegar_valor(cartas[1], atributo2);

    printf("\nSoma dos atributos:\n%s - (%s): %.2f\n%s - (%s): %.2f\n", cartas[0].nome_cidade, cartas[0].nome_pais, soma1, cartas[1].nome_cidade, cartas[1].nome_pais, soma2);

    // Determina vencedor usando ternário
    const char* vencedor = (soma1 > soma2) ? cartas[0].nome_cidade:
                           (soma2 > soma1) ? cartas[1].nome_cidade: "Empate";

    printf("\nVencedor da rodada: %s\n", vencedor);

    return 0;
}

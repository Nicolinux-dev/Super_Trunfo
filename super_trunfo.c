#include <stdio.h>
#include <locale.h>
#include <string.h>

#define city_name 121
#define country_name 51

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    // ==============================
    // T�tulo e introdu��o do jogo
    // ==============================
    printf("\n=S=u=P=e=R==T=r=U=N=F=o==G=A=M=E=\n");
    printf("\nBem-vindo ao jogo Super Trunfo!\n");
    printf("Para come�ar, preencha todos os dados solicitados para criar suas cartas.\n");

    // Apresenta os atributos que cada carta deve ter
    printf("\nCada carta ter� os seguintes atributos:\n");
    printf("   - Estado (Sigla)\n");
    printf("   - C�digo (1 letra de A a H + 2 n�meros de 01 a 04) - ex: A01\n");
    printf("   - Nome da cidade\n");
    printf("   - Popula��o\n");
    printf("   - �rea (em quil�metros quadrados)\n");
    printf("   - PIB (em bilh�es de reais)\n");
    printf("   - N�mero de pontos tur�sticos\n");

    // Exemplo ilustrativo para orientar o usu�rio
    printf(
        "\nExemplo de preenchimento de carta:\n"
        "-----------------------------------\n"
        "Estado: CE\n"
        "C�digo: C01\n"
        "Nome da cidade: Fortaleza\n"
        "Popula��o: 180000\n"
        "�rea: 155.00 \n"
        "PIB: 3.25\n"
        "N�mero de pontos tur�sticos: 5\n"

        /* As tr�s m�tricas abaixo (densidade populacional, PIB per capita e Super Poder)
        foram adicionadas posteriormente para aumentar a complexidade do projeto,
        conforme pedido do professor. Elas ser�o calculadas automaticamente pelo programa.*/
        "O valor do PIB per capita, Densidade populacional e o Super Poder ser�o calculados automaticamente!\n"
        "-----------------------------------\n"
        "Pronto! Agora � s� jogar!\n");

    printf("\n=============================\n");

    // ==============================
    // Cadastro da PRIMEIRA CARTA
    // ==============================
    // Declara��o das vari�veis da primeira carta
    char pais1[51];                // Nome do pa�s
    char estado1[3];               // Sigla do estado (2 caracteres + '\0')
    char codigo1[4];               // C�digo da carta (ex: A01)
    char nome_cidade1[city_name];  // Nome da cidade
    unsigned long int populacao1;  // Popula��o da cidade
    float area1;                   // �rea da cidade em km�
    float pib1;                    // PIB da cidade (em bilh�es de reais)
    int numero_pontos_turisticos1; // Quantidade de pontos tur�sticos
    float densidade_populacional1; // Resultado da popula��o dividida pela �rea
    float pib_per_capita1;         // Resultado do PIB dividido pela popula��o
    float super_poder1;            // Soma de todos os atributos para definir o "super poder" da carta

    // Coleta dos dados informados pelo usu�rio
    printf("Pa�s: ");
    fgets(pais1, country_name, stdin);
    pais1[strcspn(pais1, "\n")] = '\0';

    printf("Estado: ");
    scanf(" %2s", estado1);
    getchar();

    printf("C�digo (ex: A01): ");
    scanf(" %3s", codigo1);
    getchar();

    printf("Nome da cidade: ");
    // AEDS 8: STRINGS (2) - Ler STRINGs do teclado com fgets() e scanf() e limpar o buffer de entrada - https://www.youtube.com/watch?v=3hNWZ3zOqdA
    fgets(nome_cidade1, city_name, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Popula��o: ");
    scanf("%lu", &populacao1);

    printf("�rea (em quil�metros quadrados): ");
    scanf("%f", &area1);

    printf("PIB (em bilh�es de reais): ");
    scanf("%f", &pib1);

    printf("N�mero de pontos tur�sticos: ");
    scanf("%d", &numero_pontos_turisticos1);
    while (getchar() != '\n')
        ;

    // Exibi��o final dos dados da primeira carta
    printf("\nCarta 1 - Dados Informados:\n");
    printf("Pa�s: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Popula��o: %lu habitantes\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("Pontos tur�sticos: %d\n", numero_pontos_turisticos1);

    // C�lculo das m�tricas derivadas
    densidade_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f habitantes por km�\n", densidade_populacional1);
    pib_per_capita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_populacional1) + numero_pontos_turisticos1;
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n=============================\n");

    // ==============================
    // Cadastro da SEGUNDA CARTA
    // ==============================
    char pais2[51];
    char estado2[3];
    char codigo2[4];
    char nome_cidade2[city_name];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("Pa�s: ");
    fgets(pais2, country_name, stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("Estado: ");
    scanf(" %2s", estado2);
    getchar();

    printf("C�digo (ex: A01): ");
    scanf(" %3s", codigo2);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome_cidade2, city_name, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Popula��o: ");
    scanf("%lu", &populacao2);

    printf("�rea (em quil�metros quadrados): ");
    scanf("%f", &area2);

    printf("PIB (em bilh�es de reais): ");
    scanf("%f", &pib2);

    printf("N�mero de pontos tur�sticos: ");
    scanf("%d", &numero_pontos_turisticos2);
    while (getchar() != '\n');

    printf("\nCarta 2 - Dados Informados:\n");
    printf("Pa�s: %s\n", pais2);
    printf("Estado: %s\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Popula��o: %lu habitantes\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("Pontos tur�sticos: %d\n", numero_pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f habitantes por km�\n", densidade_populacional2);
    pib_per_capita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    super_poder2 = (float)populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_populacional2) + numero_pontos_turisticos2;
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n=============================================================");
    printf("\nAgora, vamos comparar as cartas.\nPrepare-se para a batalha!");
    printf("\n=============================================================\n");

    int choice;
    do
    {
        printf("\nEscolha o atributo para comparar:\n");
        printf("1 - Comparar todos os Atributos!\n");
        printf("2 - Popula��o\n");
        printf("3 - �rea\n");
        printf("4 - PIB\n");
        printf("5 - Pontos Tur�sticos\n");
        printf("6 - Densidade Populacional\n");
        printf("7 - PIB per Capita\n");
        printf("8 - Super Poder\n");
        printf("9 - Sair do programa.\n");
        printf("\nDigite o n�mero correspondente ao atributo escolhido: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int pontos1 = 0, pontos2 = 0;

            printf("\n=============================================\n");
            printf("BATALHA ENTRE:  %s (%s) E %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);
            printf("=============================================\n");

            // Popula��o
            if (populacao1 > populacao2)
            {
                pontos1++;
                printf("Popula��o: %s venceu (%lu > %lu)\n", nome_cidade1, populacao1, populacao2);
            }
            else if (populacao2 > populacao1)
            {
                pontos2++;
                printf("Popula��o: %s venceu (%lu > %lu)\n", nome_cidade2, populacao2, populacao1);
            }
            else
                printf("Popula��o: empate (%lu = %lu)\n", populacao1, populacao2);

            // �rea
            if (area1 > area2)
            {
                pontos1++;
                printf("�rea: %s venceu (%.2f km� > %.2f km�)\n", nome_cidade1, area1, area2);
            }
            else if (area2 > area1)
            {
                pontos2++;
                printf("�rea: %s venceu (%.2f km� > %.2f km�)\n", nome_cidade2, area2, area1);
            }
            else
                printf("�rea: empate (%.2f km� = %.2f km�)\n", area1, area2);

            // PIB
            if (pib1 > pib2)
            {
                pontos1++;
                printf("PIB: %s venceu (%.2f > %.2f)\n", nome_cidade1, pib1, pib2);
            }
            else if (pib2 > pib1)
            {
                pontos2++;
                printf("PIB: %s venceu (%.2f > %.2f)\n", nome_cidade2, pib2, pib1);
            }
            else
                printf("PIB: empate (%.2f = %.2f)\n", pib1, pib2);

            // Pontos tur�sticos
            if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
            {
                pontos1++;
                printf("Pontos tur�sticos: %s venceu (%d > %d)\n", nome_cidade1, numero_pontos_turisticos1, numero_pontos_turisticos2);
            }
            else if (numero_pontos_turisticos2 > numero_pontos_turisticos1)
            {
                pontos2++;
                printf("Pontos tur�sticos: %s venceu (%d > %d)\n", nome_cidade2, numero_pontos_turisticos2, numero_pontos_turisticos1);
            }
            else
                printf("Pontos tur�sticos: empate (%d = %d)\n", numero_pontos_turisticos1, numero_pontos_turisticos2);

            // Densidade populacional (menor vence)
            if (densidade_populacional1 < densidade_populacional2)
            {
                pontos1++;
                printf("Densidade populacional: %s venceu (%.2f < %.2f)\n", nome_cidade1, densidade_populacional1, densidade_populacional2);
            }
            else if (densidade_populacional2 < densidade_populacional1)
            {
                pontos2++;
                printf("Densidade populacional: %s venceu (%.2f < %.2f)\n", nome_cidade2, densidade_populacional2, densidade_populacional1);
            }
            else
                printf("Densidade populacional: empate (%.2f = %.2f)\n", densidade_populacional1, densidade_populacional2);

            // PIB per capita
            if (pib_per_capita1 > pib_per_capita2)
            {
                pontos1++;
                printf("PIB per capita: %s venceu (%.2f > %.2f)\n", nome_cidade1, pib_per_capita1, pib_per_capita2);
            }
            else if (pib_per_capita2 > pib_per_capita1)
            {
                pontos2++;
                printf("PIB per capita: %s venceu (%.2f > %.2f)\n", nome_cidade2, pib_per_capita2, pib_per_capita1);
            }
            else
                printf("PIB per capita: empate (%.2f = %.2f)\n", pib_per_capita1, pib_per_capita2);

            // Super Poder
            if (super_poder1 > super_poder2)
            {
                pontos1++;
                printf("Super Poder: %s venceu (%.2f > %.2f)\n", nome_cidade1, super_poder1, super_poder2);
            }
            else if (super_poder2 > super_poder1)
            {
                pontos2++;
                printf("Super Poder: %s venceu (%.2f > %.2f)\n", nome_cidade2, super_poder2, super_poder1);
            }
            else
                printf("Super Poder: empate (%.2f = %.2f)\n", super_poder1, super_poder2);

            printf("\n---------------------------------------------\n");
            printf("Resultado Final:\n");
            printf("%s (%s): %d pontos\n", nome_cidade1, pais1, pontos1);
            printf("%s (%s): %d pontos\n", nome_cidade2, pais2, pontos2);
            printf("---------------------------------------------\n");

            if (pontos1 > pontos2)
                printf("Vencedor: %s (%s) com %d pontos!\n", nome_cidade1, pais1, pontos1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s (%s) com %d pontos!\n", nome_cidade2, pais2, pontos2);
            else
                printf("Empate total entre %s e %s!\n", nome_cidade1, nome_cidade2);

            printf("=============================================\n");
            break;
        }

        case 2: // Popula��o
            if (populacao1 > populacao2)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais1, nome_cidade1, pais2, nome_cidade2);
                printf("Comparando popula��o de %s (%s): %lu habitantes vs %s (%s): %lu habitantes\n", nome_cidade1, pais1, populacao1, nome_cidade2, pais2, populacao2);
                printf("Vencedor: Carta 1 - %s (%s) com %lu habitantes\n", nome_cidade1, pais1, populacao1);
            }
            else if (populacao2 > populacao1)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais2, nome_cidade2, pais1, nome_cidade1);
                printf("Comparando popula��o de %s (%s): %lu habitantes vs %s (%s): %lu habitantes\n", nome_cidade2, pais2, populacao2, nome_cidade1, pais1, populacao1);
                printf("Vencedor: Carta 2 - %s (%s) com %lu habitantes\n", nome_cidade2, pais2, populacao2);
            }
            else
            {
                printf("Empate em popula��o entre %s (%s) e %s (%s): ambos com %lu habitantes!\n", nome_cidade1, pais1, nome_cidade2, pais2, populacao1);
            }
            break;
        case 3: // �rea
            if (area1 > area2)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais1, nome_cidade1, pais2, nome_cidade2);
                printf("Comparando �rea de %s (%s): %.2f km� vs %s (%s): %.2f km�\n", nome_cidade1, pais1, area1, nome_cidade2, pais2, area2);
                printf("Vencedor: Carta 1 - %s (%s) com %.2f km�\n", nome_cidade1, pais1, area1);
            }
            else if (area2 > area1)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais2, nome_cidade2, pais1, nome_cidade1);
                printf("Comparando �rea de %s (%s): %.2f km� vs %s (%s): %.2f km�\n", nome_cidade2, pais2, area2, nome_cidade1, pais1, area1);
                printf("Vencedor: Carta 2 - %s (%s) com %.2f km�\n", nome_cidade2, pais2, area2);
            }
            else
            {
                printf("Empate em �rea entre %s (%s) e %s (%s): ambos com %.2f km�!\n", nome_cidade1, pais1, nome_cidade2, pais2, area1);
            }
            break;

        case 4: // PIB
            if (pib1 > pib2)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais1, nome_cidade1, pais2, nome_cidade2);
                printf("Comparando PIB de %s (%s): %.2f bilh�es vs %s (%s): %.2f bilh�es\n", nome_cidade1, pais1, pib1, nome_cidade2, pais2, pib2);
                printf("Vencedor: Carta 1 - %s (%s) com %.2f bilh�es\n", nome_cidade1, pais1, pib1);
            }
            else if (pib2 > pib1)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais2, nome_cidade2, pais1, nome_cidade1);
                printf("Comparando PIB de %s (%s): %.2f bilh�es vs %s (%s): %.2f bilh�es\n", nome_cidade2, pais2, pib2, nome_cidade1, pais1, pib1);
                printf("Vencedor: Carta 2 - %s (%s) com %.2f bilh�es\n", nome_cidade2, pais2, pib2);
            }
            else
            {
                printf("Empate em PIB entre %s (%s) e %s (%s): ambos com %.2f bilh�es!\n", nome_cidade1, pais1, nome_cidade2, pais2, pib1);
            }
            break;

        case 5: // Pontos Tur�sticos
            if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais1, nome_cidade1, pais2, nome_cidade2);
                printf("Comparando pontos tur�sticos: %s (%s): %d vs %s (%s): %d\n", nome_cidade1, pais1, numero_pontos_turisticos1, nome_cidade2, pais2, numero_pontos_turisticos2);
                printf("Vencedor: Carta 1 - %s (%s) com %d pontos tur�sticos\n", nome_cidade1, pais1, numero_pontos_turisticos1);
            }
            else if (numero_pontos_turisticos2 > numero_pontos_turisticos1)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais2, nome_cidade2, pais1, nome_cidade1);
                printf("Comparando pontos tur�sticos: %s (%s): %d vs %s (%s): %d\n", nome_cidade2, pais2, numero_pontos_turisticos2, nome_cidade1, pais1, numero_pontos_turisticos1);
                printf("Vencedor: Carta 2 - %s (%s) com %d pontos tur�sticos\n", nome_cidade2, pais2, numero_pontos_turisticos2);
            }
            else
            {
                printf("Empate em pontos tur�sticos entre %s (%s) e %s (%s): ambos com %d pontos!\n", nome_cidade1, pais1, nome_cidade2, pais2, numero_pontos_turisticos1);
            }
            break;

        case 6: // Densidade Populacional (menor vence)
            if (densidade_populacional1 < densidade_populacional2)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais1, nome_cidade1, pais2, nome_cidade2);
                printf("Comparando densidade populacional: %s (%s): %.2f hab/km� vs %s (%s): %.2f hab/km�\n", nome_cidade1, pais1, densidade_populacional1, nome_cidade2, pais2, densidade_populacional2);
                printf("Vencedor: Carta 1 - %s (%s) com menor densidade: %.2f hab/km�\n", nome_cidade1, pais1, densidade_populacional1);
            }
            else if (densidade_populacional2 < densidade_populacional1)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais2, nome_cidade2, pais1, nome_cidade1);
                printf("Comparando densidade populacional: %s (%s): %.2f hab/km� vs %s (%s): %.2f hab/km�\n", nome_cidade2, pais2, densidade_populacional2, nome_cidade1, pais1, densidade_populacional1);
                printf("Vencedor: Carta 2 - %s (%s) com menor densidade: %.2f hab/km�\n", nome_cidade2, pais2, densidade_populacional2);
            }
            else
            {
                printf("Empate em densidade populacional entre %s (%s) e %s (%s): ambos com %.2f hab/km�!\n", nome_cidade1, pais1, nome_cidade2, pais2, densidade_populacional1);
            }
            break;

        case 7: // PIB per Capita
            if (pib_per_capita1 > pib_per_capita2)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais1, nome_cidade1, pais2, nome_cidade2);
                printf("Comparando PIB per capita de %s (%s): %.2f vs %s (%s): %.2f\n", nome_cidade1, pais1, pib_per_capita1, nome_cidade2, pais2, pib_per_capita2);
                printf("Vencedor: Carta 1 - %s (%s) com %.2f de PIB per capita\n", nome_cidade1, pais1, pib_per_capita1);
            }
            else if (pib_per_capita2 > pib_per_capita1)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais2, nome_cidade2, pais1, nome_cidade1);
                printf("Comparando PIB per capita de %s (%s): %.2f vs %s (%s): %.2f\n", nome_cidade2, pais2, pib_per_capita2, nome_cidade1, pais1, pib_per_capita1);
                printf("Vencedor: Carta 2 - %s (%s) com %.2f de PIB per capita\n", nome_cidade2, pais2, pib_per_capita2);
            }
            else
            {
                printf("Empate em PIB per capita entre %s (%s) e %s (%s): ambos com %.2f\n", nome_cidade1, pais1, nome_cidade2, pais2, pib_per_capita1);
            }
            break;

        case 8: // Super Poder
            if (super_poder1 > super_poder2)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais1, nome_cidade1, pais2, nome_cidade2);
                printf("Comparando Super Poder de %s (%s): %.2f vs %s (%s): %.2f\n", nome_cidade1, pais1, super_poder1, nome_cidade2, pais2, super_poder2);
                printf("Vencedor: Carta 1 - %s (%s) com %.2f de Super Poder\n", nome_cidade1, pais1, super_poder1);
            }
            else if (super_poder2 > super_poder1)
            {
                printf("Pa�ses em Batalha: %s (%s) vs %s (%s)\n", pais2, nome_cidade2, pais1, nome_cidade1);
                printf("Comparando Super Poder de %s (%s): %.2f vs %s (%s): %.2f\n", nome_cidade2, pais2, super_poder2, nome_cidade1, pais1, super_poder1);
                printf("Vencedor: Carta 2 - %s (%s) com %.2f de Super Poder\n", nome_cidade2, pais2, super_poder2);
            }
            else
            {
                printf("Empate em Super Poder entre %s (%s) e %s (%s): ambos com %.2f\n", nome_cidade1, pais1, nome_cidade2, pais2, super_poder1);
            }
            break;
        case 9:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("\nOp��o inv�lida! Escolha um n�mero entre 1 e 9.\n");
            break;
        }
    } while (choice != 9);

    printf("=============================================\n");
    printf("\nDesenvolvido por Nicolinux\n");

    return 0;
}

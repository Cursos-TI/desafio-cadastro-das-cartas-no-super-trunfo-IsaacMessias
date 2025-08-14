#include <stdio.h>

int main() {
    //Colocado na ordem de aparição da carta.
    //Por hora, chamarei as variantes por ordem 1 e 2.
    char letra1, letra2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pibpc1, pibpc2;

     //solicitados todos os valores da primeira carta, igual para a segunda:
     //declarei as informações de cada carta junto

    printf("* Bem vindo ao cadastro de cartas do SUPER TRUNFO! *\n");
    printf("Vamos cadastrar suas cartas!\n");    
    printf("Para o cadastro das suas cartas. por favor, insira as informações do estado, e cidade escolhidos.\n");
    printf("Após inserir as infomações, pressione enter:\n");
    
    printf("Insira uma letra entre A e H correspondente ao estado: \n");
    scanf(" %c", &letra1);

    printf("Insira o codigo da carta, equivale a letra + 01: \n");
    scanf(" %s", &codigo1);

    while (getchar() != '\n');//limpa enter
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o \n

    printf("Insira a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Insira a população da cidade em Km2: \n");
    scanf(" %f", &area1);

    printf("Insira o pib aproximado da cidade: \n");
    scanf(" %f", &pib1);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    pibpc1 = (float) pib1 / populacao1;


printf("Cadastro concluido, vamos para o proximo.\n");
    
    printf("Insira uma letra, entre A e H correspondente ao estado: \n");
    scanf(" %c", &letra2);

    printf("Insira o codigo da carta, equivale a letra + 02: \n");
    scanf(" %s", &codigo2);

      // Limpa o ENTER antes de fgets novamente
    while (getchar() != '\n');
    printf("Insira o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Insira a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Insira a população da cidade em Km2: \n");
    scanf(" %f", &area2);

    printf("Insira o pib aproximado da cidade: \n");
    scanf(" %f", &pib2);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos2);
    
    densidade2 = (float) populacao2 / area2;
    pibpc2 = (float) pib2 / populacao2;

        //apresentação das duas cartas.
        printf("Cadastro concluido, as cartas são: \n");
        printf("Carta 1:\n"
                "Estado: %c \n "
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
                "População: %d \n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n"
                "Densidade populacional: %.2f\n"
                "PIB per capita: %.2f\n",
                letra1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibpc1);
 printf("Carta 2:\n"
                "Estado: %c\n "
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
                "População: %d \n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n"
                "Densidade populacional: %.2f\n"
                "PIB per capita: %.2f\n",
                letra2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpc2);
//utilizei apenas 1 comando por carta

return 0;
}

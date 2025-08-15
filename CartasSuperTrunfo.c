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
    
    unsigned int resultadopopulacao1 = populacao1 > populacao2;
    unsigned int resultadoarea = area1 > area2;
    unsigned int resultadopib = pib1 > pib2;
    unsigned int resultadopontos = pontos1 > pontos2;
    unsigned int resultadodensidade = densidade1 < densidade2;
    unsigned int resultadopinbpc = pibpc1 > pibpc2;
    unsigned int resultadosuper = superpoder1 > superpoder2;

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
    
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Insira a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Insira a area da cidade em Km2: \n");
    scanf(" %f", &area1);

    printf("Insira o pib aproximado da cidade em bilhões: \n");
    scanf(" %f", &pib1);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    pibpc1 = (float) (pib1 / populacao1) * 100000;
    float superpoder1 = (float)(populacao1 + area1 + pib1 + pontos1 + pibpc1 + (1 / densidade1));

printf("Cadastro concluido, vamos para o proximo.\n");
    
    printf("Insira uma letra, entre A e H correspondente ao estado: \n");
    scanf(" %c", &letra2);

    printf("Insira o codigo da carta, equivale a letra + 02: \n");
    scanf(" %s", &codigo2);

    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Insira a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Insira a população da cidade em Km2: \n");
    scanf(" %f", &area2);

    printf("Insira o pib aproximado da cidade em bilhões: \n");
    scanf(" %f", &pib2);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos2);
    
    densidade2 = (float) populacao2 / area2;
    pibpc2 = (float) (pib2 / populacao2) * 100000;
    float superpoder2 = (float)(populacao2 + area2 + pib2 + pontos2 + pibpc2 + (1 / densidade2));

        //apresentação das duas cartas.
        printf("Cadastro concluido, as cartas são: \n");
        printf("--------------------------\n");
        printf("Carta 1:\n"
                "Estado: %c \n "
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
                "População: %d \n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n"
                "Densidade populacional: %.2f\n"
                "PIB per capita: %.2f\n"
                "Super poder: %.2lf\n",
                letra1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibpc1, superpoder1);
        
        printf("--------------------------\n");
        printf("Carta 2:\n"
                "Estado: %c\n "
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
                "População: %d \n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n"
                "Densidade populacional: %.2f\n"
                "PIB per capita: %.2f\n"
                "Super poder: %.2lf\n",
                letra2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpc2, superpoder2);
//utilizei apenas 1 comando por carta

printf("--------------------------\n");
printf("Seguimos para o resultado de cada comparação:");
printf("Para resultado 1, a carta 1 venceu.\n" "Para resultado 0, carta 2 vencer\n");
    printf("vencedor em populção: %d\n", resultadopopulacao1);
    printf("Vencedor em área: %d\n", resultadoarea);
    printf("Vencedor em PIB: %d\n", resultadopib);
    printf("Vencedor em Pontos turistivos: %d\n", resultadopontos);
    printf("Vencedo em Dencidade populacional(menor é melhor): %d\n", resultadodensidade);
    printf("Vencedor em PIB per capita: %d\n", resultadopinbpc);
    printf("Vencedor em super poder: %d\n", resultadosuper);

printf("--------------------------\n");
printf("Espero que tenha gostado!!!\n""Obrigado.\n");



return 0;
}
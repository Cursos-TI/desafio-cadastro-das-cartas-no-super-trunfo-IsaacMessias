#include <stdio.h>

int main() {
    char letra1, letra2;
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
//Colocado na ordem de aparição da carta.
//Por hora, chamarei as variantes por ordem 1 e 2.
     
    printf("Por favor, cadastre as duas cartas seguindo as instruções\n");
    printf("Após inserir as infomações, pressione enter\n");
    
    printf("Insira a letra correspondente ao estado: \n");
    scanf(" %c", &letra1);

    printf("Insira o codigo da carta, equivale a letra + 01: \n");
    scanf(" %s", &codigo1);

    while (getchar() != '\n');//limpa enter, pesquisei pois meu fgets não funcionava
    printf("Insira o nome da cidade:\n");
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
//solicitados todos os valores da primeira carta, igual para a segunda:
 printf("Cadastro concluido, vamos para o proximo.\n");
    
    printf("Insira a letra correspondente ao estado: \n");
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

        //apresentação das duas cartas.
        printf("Cadastro concluido, as cartas são: \n");
        printf("Carta 1:\n"
                "Estado: %c \n "
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
                "População: %d \n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n""\n""\n",
                letra1, codigo1, cidade1, populacao1, area1, pib1, pontos1);
 printf("Carta 2:\n"
                "Estado: %c\n "
                "Codigo da carta: %s \n"
                "Nome da cidade: %s \n"
                "População: %d \n"
                "Area: %.2f \n"
                "PIB: %.2f \n"
                "Numero de pontos turisticos: %d \n",
                letra2, codigo2, cidade2, populacao2, area2, pib2, pontos2);
//utilizei apenas 1 linha por carta, identando de uma forma a pre vizualizar o resutado.

return 0;
}

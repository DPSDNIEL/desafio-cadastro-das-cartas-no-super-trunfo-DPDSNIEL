#include <stdio.h>

int main () {

    /* Aluno: Daniel P Santos 
    *  Matricula: 202501516191 
    */

    printf("\n*******Super Trunfo - Paises******* \n\n");

    // Declaração de variaveis 
    char card_cod[20], estado[20], cidade[20];
    int population, point_turism;
    float area_km, pib;

    static int cartas = 0;

    // Cadastrando as cartas 

    printf("Nome do estado: \n");
    scanf("%s", estado);

    printf("Carta numero: \n");
    scanf("%s", card_cod);
    
    printf("Nome do cidade:  \n");
    scanf("%s", cidade);

    printf("Qual a população:  \n");
    scanf("%d", &population);

    printf("Qual a area:  \n");
    scanf("%f", &area_km);

    printf("Qual o pib :  \n");
    scanf("%f", &pib);

    printf("Qual o numero de pontos turistico :  \n");
    scanf("%d", &point_turism);

    cartas++;

    // Card feito

    printf("\nCarta %d \n", cartas);
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", card_cod);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", population);
    printf("Área: %.2f \n", area_km);
    printf("PIB: %.2f \n", pib);
    printf("Numero de pontos turisticos: %d \n", point_turism);

    return 0;
}
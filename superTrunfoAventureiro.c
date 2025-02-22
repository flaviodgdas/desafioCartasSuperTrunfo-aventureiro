#include <stdio.h>
int main(){
    //nesse sistema, vc vai cadastrar duas cartas com com alguns dados referente a carta.   
    char estado[50], nome_cidade[50];
    int codigo, pontos_turisticos;
    float populacao, area, pib, densidade_populacional, pib_per_capita;
    // print de boas vindas
    printf("******Bem vindo ao desafio superTrunfo Novato!******\n");
    //aqui inicia nossas funções.
    printf("Digite o nome do estado: ");
    scanf("%s", &estado);
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);
    printf("Digite a populacao da cidade: ");
    scanf("%f", &populacao);
    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);    
    // esse é o resultado para imprimir na tela
    printf("**** Veja os atributos de cada carta ****\n");
    printf("- Estado digitado: %s\n- Codigo da cidade: %d\n- Cidade Digitada: %s\n", estado, codigo, nome_cidade);    
    printf("- Populacao digitada: %.2f\n- Area: %.2f\n- PIB: %.2f\n- Pontos Turisticos: %d\n", populacao, area, pib, pontos_turisticos);
    // Cálculo da densidade
    densidade_populacional = (populacao / area);
    printf("- Densidade Populacional e: %.2f\n", densidade_populacional);
    // Cálculo do pib per capita
    pib_per_capita = (pib / populacao);
    printf("- Pib per capita e: %.2f\n", pib_per_capita);

    printf("**** Volte sempre! ****");

    return 0;
}
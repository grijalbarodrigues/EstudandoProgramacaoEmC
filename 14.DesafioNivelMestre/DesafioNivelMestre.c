#include <stdio.h>

int main (){
    
    //variaveis da carta 1
    char estado1, codigo1[4], cidade1[20];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibpercapita1;
    int pontoturistico1;
    float superPoder1;

    
    //entrada dos dados da primeira carta
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a letra do Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população desta cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico1);
    
    //CALCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER DA CARTA 1: 
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / (float) populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + (1/densidade1);

   //saída dos dados da primeira carta inseridos pelo usuário
    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.2lu habitantes\n",estado1,codigo1,cidade1,populacao1);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",area1,pib1,pontoturistico1);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais\nSuper Poder Carta 1%.2f\n", densidade1, pibpercapita1, superPoder1);


     //variaveis da carta 2
    char estado2, codigo2[4], cidade2[20];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibpercapita2;
    int pontoturistico2;
    float superPoder2;

    //inserção dos dados para cadastro da CARTA 2:

    printf("Vamos cadastrar a CARTA 2!\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população desta cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico2);

    //CALCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER DA CARTA 2: 
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1/densidade2);

    //impressão na tela dos dados cadastrados da CARTA 2
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.2lu habitantes\n",estado2,codigo2,cidade2,populacao2);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",area2,pib2,pontoturistico2);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais\nSuper Poder Carta 2%.2f\n", densidade2, pibpercapita2, superPoder2);

    

    //RESULTADO DA GUERRA DAS CARTAS:
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontosTuristicos = pontoturistico1 > pontoturistico2;
    int resultadoDensidade = densidade1 > densidade2;
    int resultadoPibperCapita = pibpercapita1 < pibpercapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;


    printf("\n*** RESULTADO DA GUERRA DAS CARTAS ***\n");
    printf("Comparação entre CARTA 1 e CARTA 2:\n");
    printf("Se (1) Carta 1 venceu - Se (0) Carta 2 venceu\n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPIB);
    printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB per capita: %d\n", resultadoPibperCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);
  


    return 0;
}
#include <stdio.h>

int main (){
    char estado;//variaveis declaradas
    char codigo[4];//string com até 3 caracteres para codigo da cidade
    char cidade[20];//string com até 19 caracteres para nome da cidade
    int populacao;
    float area, pib, densidade, pibpercapita;
    int pontoturistico;

    //entrada dos dados da primeira carta
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a letra do Estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico);
    
    //CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA PRIMEIRA CARTA
    densidade = populacao / area;
    pibpercapita = (float) pib / populacao;

    //saída dos dados da primeira carta inseridos pelo usuário
    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.2d habitantes\n",estado,codigo,cidade,populacao);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",area,pib,pontoturistico);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais\n", densidade, pibpercapita);

    //inserção dos dados para cadastro da segunda carta
    printf("Vamos cadastrar a segunda carta!\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico);

    //CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA SEGUNDA CARTA
    densidade = populacao / area;
    pibpercapita = (float) pib / populacao;

    //impressão na tela dos dados cadastrados da segunda carta
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.2d habitantes\n",estado,codigo,cidade,populacao);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",area,pib,pontoturistico);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais\n", densidade, pibpercapita);
    
    return 0;
}
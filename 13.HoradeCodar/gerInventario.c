#include <stdio.h>

int main (){
    //declarar e inicializar os produtos q terao no estoque
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    //declarar variavel de estoque e como estoque NAO é negativo uso unsigned
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    //declarar valor dos produtos
    float valorA = 10.50;
    float valorB = 20.40;

    //definir estoque minimo
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;
    
    //calcular o valor total de protudos em estoque

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //apresentacao das informações dos produtos na tela:

    printf("O %s tem estoque de: %u unidades, valendo R$: %.2f /unidade\n", produtoA, estoqueA, valorA);
    printf("O %s tem estoque de: %u unidades, valendo R$: %.2f /unidade\n", produtoB, estoqueB, valorB);

    //comparar com o valor minimo em estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;
    
    printf("O estoque do %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O estoque do %s tem estoque mínimo %d\n", produtoB, resultadoB);

    //comparacao dos valores totais dos produtos

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %.2d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));
    // a operacao maior nesse ultima linha vai retornar 0 pq é falso q valor de A > B
}
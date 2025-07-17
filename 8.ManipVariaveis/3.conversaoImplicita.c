#include <stdio.h>

int main (){

    //conversão implicita:

    int a = 10;
    float b = 5.5;
    float resultado = a + b;//aqui a variavel float, q recebe a inteira, força ela implicitamente

    printf("O resultado é: %.2f\n", resultado);

    //PROBLEMA SE O CAMINHO FOR CONTRÁRIO - FORÇAR UMA FLOAR A INTEIRA - POSSO PERDER DADOS APOS A VIRGULA
    //NESSE CASO É BOM USAR A CONVERSÃO EXPLICITA...
    //


}
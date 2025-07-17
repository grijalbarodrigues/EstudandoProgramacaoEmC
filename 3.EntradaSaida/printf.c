#include <stdio.h>
 
int main() {
    int idade = 32;
    float altura = 1.77;
    double saldoBancario = 12345.67;
    char inicial = 'G';
    char nome[20] = "GRIJALBA";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);//.2 limito a quantidade de casas decimais
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    /*
    printf("%formato1 %formato2 %formato3", varivavel1, variavel2, variavel3)

    %d: imprime um inteiro no formato decimal
    %i: equivalente a %d
    %f: imprime um numero float no formato padrão
    %e: imprime um numero float na notacao cientifica
    %c: imprime um unico caractere
    %s: imprime uma cadeia de caracteres (string)
    */

    return 0;
}
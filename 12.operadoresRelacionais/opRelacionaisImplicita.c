#include <stdio.h>

int main (){

    //compara dois valores e relaciona com V ou F
    // exemplo: comparar variavel A com variavel B
    // A > B - resultado será 1 para verdadeiro e 0 para falso
    // principais OPERADORES RELACIONAIS EM C:
    /*
    maior que (>)
    menor que (<)
    maior ou igual a (>=)
    menor ou igual a (<=)
    igual a (==)
    diferente de (!=)
    */

    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    //num caso sem eu comparasse uma valor inteiro com um float
    //ele vai forçar uma conversao implicita, pegando apenas o primeiro numero do decimal;

    //outro caso se eu comparar um inteiro com um char - msm sendo um caractere
    //ele vai comparar o valor inteiro correspondente aquele caractere na tabela ASCII e vai funcionar

    return 0;
}
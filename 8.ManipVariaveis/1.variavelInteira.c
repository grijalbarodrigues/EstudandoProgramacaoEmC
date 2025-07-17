#include <stdio.h>

int main (){
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;//aqui o resultado nao vai dar um numero inteiro

    printf("Soma: %d\n",soma);
    printf("diferença: %d\n",diferenca);
    printf("produto: %d\n",produto);
    printf("quociente: %d\n",quociente);
    //NO CASO DO QUOCIENTE 10/3 VAI DAR UMA DIZIMA.. COMO A VARIAVEL É INTEIRA O VALOR SERÁ ABREVADO = 3

}
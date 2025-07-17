#include <stdio.h>

int main (){
    /*
    Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int numero = 2, resultado;

    printf("Antes incremento a variavel numero valia: %d\n", numero);
    //vai incrementar uma unidade;
    numero++;
    //posso usar operador de atribuicao ficando numero += 1;
    //numero += 1;
    printf("Após o incremento: %d\n", numero);

   
    printf("Antes do decremento : %d\n", numero);
     //vai tirar uma unidade;
    numero--;
    printf("Após o decremento: %d\n", numero);


    //pos e pre decremento e incremento

    resultado = numero++;
    //aqui aconteceu o seguinte: resultado recebeu primerio o numero q era igual a 1 e depois Numero1 recebeu incremento virando 2
    printf("Após o pós-incremento o numero = %d e Resultado = %d\n", numero, resultado);

    //pos-incremento:
    //resultado = numero;
    //numero++;


    //pré-incremento:
    //resultado = numero;
    //++numero;
    //aqui ele incrementa primerio e depois atribui
    resultado = ++numero;
    printf("Após o pré-incremento o numero = %d e Resultado = %d\n", numero, resultado);

    //pós-decremento
    //no pos (seja incremento ou decremento) primeiro atribui e depois ele incremenda/decrementa
    resultado = numero--;
    printf("Após o pos-decremento o numero = %d e Resultado = %d\n", numero, resultado);

    //pré-decremento
    resultado = --numero;
    printf("Após o pré-decremento o numero = %d e Resultado = %d\n", numero, resultado);
}
#include <stdio.h>

int main(){
    /*    
    Atribuicao simples (=)
    Atribuicao com soma (+=)
    Atribuicao com subtracao (-=)
    Atribuicao com multiplicacao (*=)
    Atribuicao com divisao (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("O resultado é: %d\n", resultado);

    //pegou o valor de resultado, somou mais 20 e atribuiu o novo resultado
    //resultado = resultado + 20;
    resultado += 20;
    printf("O resultado é: %d\n", resultado);

    //resultado = resultado - numero1;
    resultado -= numero1;
    printf("O resultado é: %d\n", resultado);

    //resultado = resultado * 5;
    resultado *= 5;
    printf("O resultado é: %d\n", resultado);

    //resultado = resultado / 2;
    resultado /= 2;
    printf("O resultado é: %d\n", resultado);

}
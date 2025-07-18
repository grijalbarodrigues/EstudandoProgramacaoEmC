#include <stdio.h>

int main (){

    //CONVERSÃO EXPLICITA!!
    //PRECISO GARANTIR Q A CONVERSAO SEJA CORRETA E NAO INCORRER EM ERROS DA CONVERSAO IMPLICITA

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > (float) numero2);
    printf("numero1 == numero2: %d\n", numero1 == (float) numero2);

    return 0;
}
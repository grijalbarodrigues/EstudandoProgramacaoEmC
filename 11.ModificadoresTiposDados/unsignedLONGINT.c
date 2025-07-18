#include <stdio.h>

int main (){
    int numerocomsinal = 3000000000;//esse valor ultrapassa o limite da variavel inteira (que vai de -2.147.483.648 até 2.147.483.647).
    unsigned int numerosemsinal = 3000000000;
    //com o unsigned ele retira o sinal negativo e ganho mais um bit possibilitando dobrar o limite de valor a ser inserido em int

    //em char é parecido, dobra o valor limmite   

    printf("inteiro com sinal negativo: %d\n", numerocomsinal);
    printf("inteiro sem sinal negativo (ou seja, somente numero + por causa do unsigned): %d\n", numerosemsinal);

    //LONG - AUMENTAR A CAPACIDADE DE INT E DOUBLE -- PODE TER O long logn int;
    //ESPECIFICADORES DE FORMATO = %ld para long int / %lld para long long int;

    int numeronormal = 2147483647;//valor maximo de inteiro
    long int numerogrande =2147483648;
    long long int numeromuitogrande =2147483648;
    

    printf("numero regular/normal: %d\n", numeronormal);
    printf("numero grande: %ld\n", numerogrande);
    printf("numero muito grande: %lld\n", numeromuitogrande);
    //ATENÇÃO!!! - TAMANHO DOS BITES EM LONG E LONG LONG INT:
    //no github ele funciona o long long int no programa desk vscode nao funciona por uma questao de versao do compilador
    //FUNCIONA DE UM JEITO NO WINDOWS E DE OUTRO NO LINUX

    return 0;
}
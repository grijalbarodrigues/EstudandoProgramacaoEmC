#include <stdio.h>

int main (){

    short int numeropequeno = 32767; //valor maximo de short inteiro
    printf("numero pequeno (short int): %d\n", numeropequeno);

    numeropequeno = 32768; // valor max de short +1
    printf("numero pequeno alem do limite de short: %d\n", numeropequeno);
    //mesma coisa, no programa desk por causa da versao ele dá erro se passar do limite. 
    //no github funciona por causa dos bytes
 
    //PARA VER OS TAMANHOS DE BYTES DIFERENTES ENTRE NORMAL E SHORT:

    printf("Comparação do Tamanho das variavéis short int e char:\n");
    printf("short int: %lu Bytes - int: %lu Bytes - long int: %lu Bytes\n", sizeof(short int), sizeof(int), sizeof(long int));
    printf("float: %lu Bytes - double: %lu Bytes - long double: %lu Bytes\n", sizeof(float), sizeof(double), sizeof(long double));

    //usar short quando POUCA MEMORIA!!!

    return 0;
}
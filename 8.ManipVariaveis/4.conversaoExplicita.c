#include <stdio.h>

int main (){
    //CONVERSÃO EXPLICITA!!

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; //esse (float) ou 'casting' força a conversão das variaveis inteiras para float

    printf("Quociente: %.2f\n", quociente);

}
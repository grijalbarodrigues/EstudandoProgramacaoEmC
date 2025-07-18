#include <stdio.h>

int main(){

    double numeropreciso = 3.14159265358979323846;
    double numeromuitopreciso = 3.141592653589793238462643383279;

    printf("numero preciso: %.15f\n", numeropreciso);
    printf("numero muito preciso: %.25lf\n", numeromuitopreciso);
    //no long double ele dá um erro de precisao nos ultimos numeros 
 
    return 0;
}
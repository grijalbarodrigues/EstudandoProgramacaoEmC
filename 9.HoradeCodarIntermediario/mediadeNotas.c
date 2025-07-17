#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("LANÇAMENTO DE NOTAS\n");
    printf("Insira a primeira nota: %f\n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: %f\n");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: %f\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.2f\n", media);

    return 0;
}
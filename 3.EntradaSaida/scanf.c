#include <stdio.h>
#include <string.h>

int main (){
    int idade;
    float altura;
    char opcao;
    char nome[30];
    char buffer[50];//buffer temporario para leitura das strings
    //sintaxe scanf abaixo:
    //scanf("formato1" "formato2", &variavel1, variavel2...); - sempre & na frente da variavel só nao quando for um string

    printf("Digite sua idade: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua altura: \n");
    fgets(buffer, sizeof(buffer),stdin);
    sscanf(buffer, "%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("Digite a opção: \n");
    fgets(buffer,sizeof(buffer),stdin);
    sscanf(buffer,"%c", &opcao);//se usar scanf precisa colocar um coloquei um espaco antes do %c para poder funcionar - se nao usar o scanf nao le o caractere
    //pode usar o fget
    printf("A opção é: %c\n", opcao);


    printf("Digite seu nome: \n");
    fgets(nome,sizeof(nome),stdin);//lê no max. 29 caract. da entrada padrao (stdin - teclado)
    //nome[strcspn(nome, "\n")] = 0;//remove o \n  do final
    /*fgets recebe 3 argumentos:
    1-o array onde a string será armazenada
    2-o tamanho max da string (incluindo o \n e o \0)
    3-o fluxo de entrada (geralmente stdin para entrada padrao do teclado)
    A linha nome[strcspn(nome, "\n")] = 0; remove o caractere de nova linha (\n) que fgets pode incluir na string. 
    strcspn retorna o índice da primeira ocorrência de \n na string nome.
    */
    printf("Seu nome completo é: \n%s\n", nome);

}
#include <stdio.h>

int main(){
    //declarando variaveis onde tem o tipo no inicio seguido do nome significativo da variavel  
    
    /*TIPOS DE VARIAVEIS
    int = numero inteiro (1,2,3...)
    float = numero flutuante valores menores - casas decimais (ex: 1,25)
    double = valores com casas decimais porem numerios maiores e maior exatidão (ex:1,25666985)
    char = um caractere
    char nome[20] = indica uma string porem nao da pra usar uma string - faço um array(juntar) - juntar varios (20) caracteres    
    */  


    int idade = 25; //quando eu coloco o =25 eu estou inicializando a variavel evitando 'lixo', assim atribuindo valor que eu sei para a variavel
    int Idade = 25;//mudar so a letra maiscula ja muda a variavel!
    int quantidade =1;
    float altura =1.77;
    double peso =77.5;
    char letra ='A';
    char nome[20]="GRIJALBA";
    //void VariavelSemTipoEspecifico //é um tipo de dado especial(ausencia de um tipo). Usado em situacoes onde uma funcao NAO retorna nenhum valor ou quando um ponteiro NAO tem um tipo especifico

}
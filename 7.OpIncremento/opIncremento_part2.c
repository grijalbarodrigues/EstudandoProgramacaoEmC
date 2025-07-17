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
    
    int a = 5, r;

    //incremento
    printf("antes de INCREMENTAR (ORIGINALMENTE) A vale: %d\n",a);
    a++;
    printf("o valor de A incrementado uma unidade: %d\n", a);

    //decremento
    printf("antes de DECREMENTAR A vale: %d\n",a);
    a--;
    printf("o valor de A DECREMENTADO uma unidade: %d\n", a);


    //--PRÉ/pós++ - INCREMENTO++/decremento--

    printf("até aqui o A vale: %d\n",a);
    r = ++a;
    printf("o valor de A antes(pré) de incrementar: %d\n", a);
    printf("o valor de r antes(pré) de incrementar: %d\n", r);
    //ou seja, A recebe o incremento de +1, depois esse valor é atribuido à r - tornando valores iguais

    printf("até aqui o A vale: %d\n",a);
    r = a++;
    printf("o valor de A apos(pós) de incrementar: %d\n", a);
    printf("o valor de r apos(pós) de incrementar: %d\n", r);
    //já aqui... primeiro o r recebe(atribuido) valor de A ate o momento, depois A recebe o incremento - tornando valores diferentes 

}
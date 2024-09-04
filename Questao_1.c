/*1) Observe o trecho de código abaixo: int INDICE = 13, SOMA = 0, K = 0;
Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
Imprimir(SOMA);
Ao final do processamento, qual será o valor da variável SOMA?*/

#include <stdlib.h>
#include <stdio.h>
#define INDICE 13

int main(int argc, char *argv[]){
    int k = 0, soma = 0;
    while (k < INDICE)
    {
        k = k + 1;
        soma = soma + k;
    }
    
    printf("Valor de SOMA = %d", soma);

}
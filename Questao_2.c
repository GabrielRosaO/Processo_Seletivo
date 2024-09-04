/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 
e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, 
informado um número, ele calcule a sequência de Fibonacci 
e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência 
ou pode ser previamente definido no código;*/

#include <stdlib.h>
#include <stdio.h>

//faz o cálculo de fibonacci até chegar no número ou no próximo numero maior do que o numero inserido
int fibonacci(long int valor_procurado){
    long int valor_a = 0, valor_b = 1, resultado = 0;
    while (resultado != valor_procurado){
        //caso o loop chegue em um valor da sequência maior do que o valor inserido encerra e retorna falso (0)
        if (resultado > valor_procurado)
        {
            break;
        }
        resultado = valor_a + valor_b;
        valor_a = valor_b;
        valor_b = resultado;
    }

    if (resultado == valor_procurado)
    {
        return 1;
    }else{
        return 0;
    }
}

int main(int argc, char *argv[]){
    long int valor_procurado;
    long int resultado;

    printf("Digite um número a ser encontrado na sequência de fibonacci: ");
    scanf("%ld", &valor_procurado);

    resultado = fibonacci(valor_procurado);
    if (resultado)
    {
        printf("Número está na sequência de Fibonacci");
    }else{
        printf("Número não está na sequência de Fibonacci");
    }
    


}
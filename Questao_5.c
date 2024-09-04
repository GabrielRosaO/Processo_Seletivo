/*5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência 
ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *inveter_string(char *string){
    int string_size = strlen(string);//tamanho total da string

    char *string_invertida = (char *)malloc(sizeof(char)*string_size);//string invertida

    int i, j = string_size-1;
    //insere os elementos da string original de maneira inversa na nova string
    for (i = 0; i < string_size; i++){
        string_invertida[j] = string[i]; 
        j--;
    }
    //armazena o caractere '/0' ao final da string invertida
    string_invertida[i] = string[string_size];
    
    return string_invertida;

}



int main(int argc, char *argv[]){
    char *string = "String teste para inversão";

    printf("%s\n", string);

    printf("%s", inveter_string(string));
}
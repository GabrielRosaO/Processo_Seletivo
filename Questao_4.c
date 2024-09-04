/*) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
• SP – R$67.836,43
• RJ – R$36.678,66
• MG – R$29.229,88
• ES – R$27.165,48
• Outros – R$19.849,53
Escreva um programa na linguagem que desejar onde 
calcule o percentual de representação que cada estado teve 
dentro do valor total mensal da distribuidora. */

#include <stdlib.h>
#include <stdio.h>

//struct que armazena cada UF com seu respectivo faturamento
typedef struct Estados{
    char *UF;
    double valor;
}Estados;


double percentualEstado(double total_mensal_distribuidora, double faturamento_estado){
    return (faturamento_estado/total_mensal_distribuidora);
}


int main(int argc, char *argv[]){
    Estados estados[5];
    double total_distribuidora = 0;
    
    
    //inserção dos valores manualmente
    estados[0].UF = "SP";
    estados[0].valor = 67836.43;
    estados[1].UF = "RJ";
    estados[1].valor = 36678.66;
    estados[2].UF = "MG";
    estados[2].valor = 29229.88;
    estados[3].UF = "ES";
    estados[3].valor = 27165.48;
    estados[4].UF = "Outros";
    estados[4].valor = 19849.53;

    //calculo total mensal da distribuidora
    for (int i = 0; i < 5; i++)
    {
        total_distribuidora += estados[i].valor;
    }
    
    //impressão do resultado
    int controle = 0;
    while (controle < 5)
    {
        printf("Percentual do estado %s: %.2lf%%\n", estados[controle].UF, percentualEstado(total_distribuidora, estados[controle].valor)*100);
        controle++;
    }
    
}
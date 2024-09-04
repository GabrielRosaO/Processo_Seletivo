#3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
#• O menor valor de faturamento ocorrido em um dia do mês;
#• O maior valor de faturamento ocorrido em um dia do mês;
#• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

import json

#retorna o valor do maior faturamento do mês
def maiorFaturamento(data): 
    menor_valor = 0
    
    for i in data:
        if i['valor'] > menor_valor:
            menor_valor = i['valor']
        
    return menor_valor

#retorna o valor do menor faturamento do mês 
def menorFaturamento(data): 
    menor_valor = 9999999.999
    
    for i in data:
        if i['valor'] < menor_valor:
            menor_valor = i['valor']
        
    return menor_valor

#cálculo da média mensal
def mediaMensal(data):
    media = 0
    
    for i in data:
        media += i['valor']
        
    return media/30

#retorna a quantidade de dias que tiveram o faturamento maior do que a média
def diasMaioresMedia(data):
    dias = 0

    media = mediaMensal(data)
    for i in data:
        if i['valor'] > media:
            dias+=1
        
    return dias

#Lê os dados do JSON e armazena em um dicionário "data_json"
with open("dados.json") as file:
    data_json = json.load(file)


print("Valor do menor faturamento: " + menorFaturamento(data_json))
print("Valor do maior faturamento: " + maiorFaturamento(data_json))
print("Quantidade de dias com faturamento maior que a média: " + diasMaioresMedia(data_json))

#print(valores)

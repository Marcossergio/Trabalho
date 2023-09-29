Projeto avaliativo 
Autor
Marcos Sergio Figueiredo Filho

Introdução
Este relatório descreve a implementação de um algoritmo em C para decompor um número inteiro maior do que 2 em uma soma de dois números primos. O objetivo deste projeto é criar um programa que permita ao usuário inserir um número e, em seguida, encontrar dois números primos que, quando somados, resultem no número fornecido pelo usuário.

Implementação
Estrutura de Dados Neste projeto, utilizamos as seguintes estruturas de dados:

Variáveis Inteiras: Foram usadas para armazenar o número fornecido pelo usuário e os números primos encontrados durante a busca.

Função Primo: Uma função que verifica se um número é primo ou não. Essa função é utilizada para determinar se um número é primo antes de usá-lo na decomposição.

Funcionamento do Programa Principal
O programa funciona da seguinte maneira:

O usuário insere um número inteiro maior do que 2.

O programa verifica se o número inserido é válido (maior do que 2).

Em seguida, ele procura uma combinação de dois números primos que somam ao número fornecido pelo usuário.

Se encontrar uma combinação válida, exibe a decomposição. Caso contrário, informa que não foi possível encontrar uma decomposição.

Exemplos de Execução do programa:

Usuário utiliza o número 7:
![Teste-funciona](https://github.com/Marcossergio/Trabalho/assets/146399385/1ce3dd5f-7f17-4293-bd15-eccc1841a4f6)


Teste funcional do codigo

Usuário utiliza um número, igual ou menor que 2:
![teste-nao-funciona](https://github.com/Marcossergio/Trabalho/assets/146399385/c61c2d5f-e0da-4e98-9d24-9e17fb9dd8ea)


Teste quando o codigo não funciona

Conclusão
Neste projeto, implementamos com sucesso um algoritmo em C para decompor um número em dois números primos.

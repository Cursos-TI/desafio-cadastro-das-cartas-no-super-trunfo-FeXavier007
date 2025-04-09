#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // nas variáveis c1 = carta 1 e c2 = carta 2
    char estado_c1, estado_c2;
    char cidade_c1 [10];
    char cidade_c2 [10];
    char codido_c1 [3] = cidade_c1+"01";
    char codido_c2 [3] = cidade_c2+"02";
    int populacao_c1, populacao_c2, p_turistico_c1, p_turistico_c2;
    float area_c1, area_c2, pib_c1, pib_c2;
    // Cadastro das Cartas:
    printf ("%s \n %s\n",cidade_c1,cidade_c1);
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

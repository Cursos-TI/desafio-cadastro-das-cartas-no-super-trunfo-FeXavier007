#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste felipe

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // nas variáveis c1 = carta 1 e c2 = carta 2
    char estado_c1, estado_c2;
    char cidade_c1 [10];
    char cidade_c2 [10];
    char cod_c1 [3];
    char cod_c2 [3];
    int populacao_c1, populacao_c2, p_turistico_c1, p_turistico_c2;
    float area_c1, area_c2, pib_c1, pib_c2;
    
    // Exibição do Título do Jogo e Instruções
    printf ("Desafio Super Trunfo - Países.\nNovato- Cadastro das Cartas.\n\n");
    printf ("Neste jogo você ira cadastrar duas cartas de Super Trunfo. \n\n");
    printf ("Você ira cadastrar as informações: Estado, Código da Carta, Cidade, \nPopulação, Área, PIB e a Quantidade de Pontos Turísticos.\n\n");
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Cadastro das Cartas:
    // Carta 01
    // Uso da função printf para exibir mensagens ao usuário, solicitando as informações necessárias com scanf.
    printf ("Vamos lá! Vamos cadastrar as cartas.\nCadastro da Carta 01.\n\n");
    printf ("Escolha o estado: A = São Paulo, B = Bahia, C = Ceará, \nD = Rio de Janeiro, E = Espírito Santo, F = Tocantins, \nG = Goiais, H = Mato Grosso\n\n");
    
    printf ("Digite a letra do estado: \n");
    scanf (" %c", estado_c1);
    
    printf ("O código é a letra do estado mais dois números ex:A01.\n");
    printf ("Digite o código: \n");
    scanf (" %s", cod_c1);
    
    printf ("Digite o nome da cidade: \n");
    scanf (" %s", cidade_c1);
    
    printf ("Digite a população: \n");
    scanf (" %d", &populacao_c1);
    
    printf ("Digite a área: \n");
    scanf (" %.2f ", &area_c1);
    
    printf ("Digite o PIB: \n");
    scanf (" %.2f ", &pib_c1);
    
    printf ("Digite a quantidade de pontos turísticos: \n");
    scanf (" %d", &p_turistico_c1);
    
    // Carta 02
    printf ("\nVamos lá! Vamos cadastrar a Carta 02.\n\n");
    printf ("Escolha o estado: A = São Paulo, B = Bahia, C = Ceará, \nD = Rio de Janeiro, E = Espírito Santo, F = Tocantins, \nG = Goiais, H = Mato Grosso\n\n");
    printf ("Digite a letra do estado: ");
    scanf (" %c", estado_c2);
    
    printf ("\nDigite o código(A letra do estado mais dois números ex:A01): ");
    scanf (" %s", cod_c2);
    
    printf ("\nDigite o nome da cidade: ");
    scanf (" %s", cidade_c2);
    
    printf ("\nDigite a população: ");
    scanf (" %d", &populacao_c2);
    
    printf ("\nDigite a área: ");
    scanf (" %.2f ", &area_c2);
    
    printf ("\nDigite o PIB: ");
    scanf (" %.2f", &pib_c2);
    
    printf ("\nDigite a quantidade de pontos turísticos: ");
    scanf (" %d", &p_turistico_c2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos Dados da Carta 01:
    printf ("\n\nSuas cartas foram cadastradas com sucesso!\n\n");
    printf ("Carta 01:\n\n");
    printf (" Estado: %c\n", estado_c1);
    printf (" Código: %s\n", cod_c1);
    printf (" Cidade: %s\n", cidade_c1);
    printf (" População: %d\n", populacao_c1);
    printf (" Área: %.2f\n", area_c1);
    printf (" PIB: %.2f\n", pib_c1);
    printf (" Pontos Turísticos: %d\n", p_turistico_c1);

    // Exibição dos Dados da Carta 02:
    printf ("\n\nCarta 02:\n\n");
    printf (" Estado: %c\n", estado_c2);
    printf (" Código: %s\n", cod_c2);
    printf (" Cidade: %s\n", cidade_c2);
    printf (" População: %d\n", populacao_c2);
    printf (" Área: %.2f\n", area_c2);
    printf (" PIB: %.2f\n", pib_c2);
    printf (" Pontos Turísticos: %d\n", p_turistico_c2);

    printf ("\n\nAs cartas foram cadastradas com sucesso!\n\n");
    //printf ("Agora você pode jogar!\n\n");
    printf ("Obrigado por jogar!\n");
     
    return 0;
}

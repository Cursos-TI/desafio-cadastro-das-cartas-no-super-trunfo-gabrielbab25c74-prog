#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
            
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
                            
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.
int carta1 = 1;
char estado1[20] = "São_Paulo";
char codigo1[20] = "A01";
char nome_cidade1[20] = "São_Paulo";
int população1 = 1500000;
float area1 = 29.521;
float PIB1 = 467000.678;
int numero_pontos_turisticos1 = 37;

printf("Super Trunfo - Estados do Brasil \n");
printf("Numero da carta: %d \n", carta1);
printf("Estado: %s \n", estado1);
printf("Código da carta: %s \n", codigo1);
printf("Nome da cidade: %s \n", nome_cidade1);
printf("População: %d \n", população1);
printf("Area: %.3f \n", area1);
printf("PIB: %.3f \n", PIB1);
printf("Números de pontos turisticos: %d \n\n", numero_pontos_turisticos1);


int carta2 = 2;
char estado2[20] = "Rio_de_Janeiro";
char codigo2[20] = "A02";
char nome_cidade2[20] = "Rio_de_Janeiro";
int população2 = 5670000;
float area2 = 78.871;
float PIB2 = 167890.000;
int numero_pontos_turisticos2 = 49;

printf("Super Trunfo - Estados do Brasil \n");
printf("Numero da carta: %d \n", carta2);
printf("Estado: %s \n", estado2);
printf("Código da carta: %s \n", codigo2);
printf("Nome da cidade: %s \n", nome_cidade2);
printf("População: %d \n", população2);
printf("Area: %.3f \n", area2);
printf("PIB: %.3f \n", PIB2);
printf("Números de pontos turisticos: %d \n", numero_pontos_turisticos2);

return 0;
}
                                                
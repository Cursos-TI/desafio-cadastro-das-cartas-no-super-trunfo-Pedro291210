# include <stdio.h>

int main (){

    // Desafio Super Trunfo



// Declaração das variaveis da Carta 01
    
char Estado1 = 'S';

char Codigodacarta1[30] = "S01";

char Cidade1[50] = "São Paulo";

int Populacao1 = 10748000;

float Area1 = 20200.25;

float Pib1 = 3300.50;

int pontoturisticos1 = 60;

// Declaração das variaveis da Carta 02

char Estado = 'R';

char Codigodacarta[30] = "R01";

char Cidade[50] = "Rio de janeiro";

int Populacao = 6748000;

float Area = 1200.25;

float Pib = 300.50;
int pontoturisticos = 30;

// Imprimindo valores das variaveis da Carta 01

printf ("Carta 01\n");

printf("Estado: %c \n", Estado1);

printf("Código: %s\n", Codigodacarta1);

printf("Nome da Cidade: %s\n", Cidade1);

printf("População: %d\n", Populacao1);

printf("Área: %f\n", Area1);

printf("Pib: %f\n", Pib1);

printf("Números de Pontos Turisticos: %d\n", pontoturisticos1);


// Imprimindo valores das variaveis da Carta 02

printf ("Carta 02\n");

printf("Estado: %c \n", Estado);

printf("Código: %s\n", Codigodacarta);

printf("Nome da Cidade: %s\n", Cidade);

printf("População: %d\n", Populacao);

printf("Área: %f\n", Area);

printf("Pib: %f\n", Pib);

printf("Números de Pontos Turisticos: %d\n", pontoturisticos);



return 0;
}
#include <stdio.h>

// Desafio Super Trunfo

int main(){
    int carta = 1;
    char estado = 'M';
    char codigodacidade[20]= "M01";
    char nomedacidade[20]= "Recreio";
    int populacao = 800000;
    float area = 1200.11;
    float pib = 200.50;
    int numerodepontosturisticos = 10;

printf("Carta: %d\n", carta);
printf("Estado: %c\n", estado);
printf("Codigo da cidade: %s\n", codigodacidade);
printf("Nome da Cidade: %s\n", nomedacidade);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f Bilhoões de reias\n", pib);
printf("Número de Pontos Turísticos: %d", numerodepontosturisticos);

return 0;
}
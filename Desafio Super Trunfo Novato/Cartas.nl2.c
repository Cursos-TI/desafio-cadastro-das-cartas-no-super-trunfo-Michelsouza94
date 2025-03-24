#include <stdio.h>

// Desafio Super Trunfo

int main(){
    int carta = 2;
    char estado = 'J';
    char codigodacidade[20]= "J01";
    char nomedacidade[20]= "Juiz de Fora";
    int populacao = 900000;
    float area = 1300.22;
    float pib = 400.70;
    int numerodepontosturisticos = 50;

printf("Carta: %d\n", carta);
printf("Estado: %c\n", estado);
printf("Codigo da cidade: %s\n", codigodacidade);
printf("Nome da Cidade: %s\n", nomedacidade);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f Bilhoões de reias\n", pib);
printf("Número de Pontos Turísticos: %d", numerodepontosturisticos);

return 0;
}
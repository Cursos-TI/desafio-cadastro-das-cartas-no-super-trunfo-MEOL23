#include <stdio.h>



int main() {                            //informações salvas da Carta 1
   
   
    char estado = 'A';                 // Letra de ''A'' a ''H''.
    char codigo[5] = "A01";               // Código: ''Estado'' + 01,02 etc. EX: A01
    char nome[20] = "Salvador";        // Nome da cidade
    float area = 693.8;                // Área em km²
    float pib = 62.954;                // PIB da cidade
    int pontosturisticos= 15;          // Quantidade de pontos turísticos
    int populacao = 2400000;           // População da cidade



    printf("Cartas Super Trunfo\n"); 
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    
    printf("Nome da Cidade: %s\n", nome);
   
    printf("Código: %s\n", codigo);
     
    printf("Área em KM²: %.2fKM²\n", area);

    printf("PIB: %.3f bilhões\n", pib);

    printf("População: %d\n", populacao);

    printf ("Pontos Turísticos: %d\n", pontosturisticos);
    
    
    


}

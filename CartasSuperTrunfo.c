#include <stdio.h>



int main() {                            //informações salvas da Carta 2
   
   
    char estado = 'B';                 // Letra de ''A'' a ''H''.
    char codigo[5] = "B02";               // Código: ''Estado'' + 01,02 etc. EX: A01
    char nome[20] = "Belém";        // Nome da cidade
    float area = 1.059;                // Área em km²
    float pib = 34.4;                // PIB da cidade
    int pontosturisticos= 17;          // Quantidade de pontos turísticos
    int populacao = 1300000;           // População da cidade



    printf("Cartas Super Trunfo\n");          
    printf("Carta 2\n");
    printf("Estado: %c\n", estado);
    
    printf("Nome da Cidade: %s\n", nome);
   
    printf("Código: %s\n", codigo);
     
    printf("Área em KM²: %.2fKM²\n", area);

    printf("PIB: %.3f bilhões\n", pib);

    printf("População: %d\n", populacao);

    printf ("Pontos Turísticos: %d\n", pontosturisticos);
     
    
    
    


}

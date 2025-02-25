#include <stdio.h>


int main() {                          
   printf("Novo commit\n");

    char estado = 'A';                                  //Declarando variáveis
    char estado2 = 'B';                    // Para o Estado, deve-se escolher uma letra entre A e H
                                          
    char codigo[5] = "A01";                //letra do estado + número, ex: A01
    char codigo2[5] = "B02";
    
    char nome[20]  = "Salvador";           //nome da cidade
    char nome2[20] = "Belém"; 
    
    float area = 693.8;                       //área em km²
    float area2 = 1059.0;                

    float pib = 62954000.00;                   //PIB
    float pib2= 30835763.45;
                                       
    int pontosturisticos= 15;            // quantidade de pontos turisticos
    int pontosturisticos2= 17;
    
    int populacao = 2400000;         //população da cidade
    int populacao2= 1300000;   
 
    //calculo de densidade populacional e pib per capta
    float densidade =  (float)populacao / area;
    float densidade2 = (float)populacao2/ area2;

    float pibpercapta = pib / populacao;
    float pibpercapta2 =  pib2 / populacao2;
 // impressão dos dados
    printf("***Cartas Super Trunfo***\n");                   //carta1
    printf("! Carta1 !\n");                             
    printf("Estado: %c\n", estado);
    
    printf("Nome da Cidade: %s\n", nome);               
   
    printf("Código: %s\n", codigo);
     
    printf("Área em KM²: %.2fKm²\n", area);

    printf("PIB: %.2f\n", pib);

    printf("População: %d\n", populacao);

    printf("Pontos Turísticos: %d\n", pontosturisticos);
   
    printf("Densidade populacional: %.2f\n", densidade);

    printf("PIB per Capta: %.3f\n", pibpercapta);
   
    printf("               \n");
    
                                      
    
    
    printf("! Carta2 !\n");                                     //carta2
    printf("Estado: %c\n", estado2);
    
    printf("Nome da Cidade: %s\n", nome2);
   
    printf("Código: %s\n", codigo2);
     
    printf("Área em KM²: %.2fKM²\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("População: %d\n", populacao2);

    printf ("Pontos Turísticos: %d\n", pontosturisticos2);

    printf("Densidade populacional: %.2f\n", densidade2);

    printf("PIB per Capta: %.3f\n", pibpercapta2);               //não tenho certeza se o cálculo está correto
   
    printf("               \n");
    

}
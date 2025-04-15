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
    
    unsigned long int populacao = 2400000;         //população da cidade
    unsigned long int populacao2= 1300000;         // Mudança de int para unsigned long int
 
    //calculo de densidade populacional e pib per capta
    float densidade =  (float)populacao / area;
    float densidade2 = (float)populacao2/ area2;

    float pibpercapta = pib / populacao;
    float pibpercapta2 =  pib2 / populacao2;

    float SuperPoder = populacao + area + pib + pontosturisticos + pibpercapta + densidade;                                      // soma dos outros atributos gera um super poder
    float SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + densidade2;

    int comparacao;



 // impressão dos dados

    printf("***Cartas Super Trunfo***\n");                   //carta1
    printf("! Carta1 !\n");                             
    printf("Estado: %c\n", estado);
    
    printf("Nome da Cidade: %s\n", nome);               
   
    printf("Código: %s\n", codigo);
     
    printf("Área em KM²: %.2fKm²\n", area);

    printf("PIB: %.2f\n", pib);

    printf("População: %lu\n", populacao);

    printf("Pontos Turísticos: %d\n", pontosturisticos);
   
    printf("Densidade populacional: %.2f\n", densidade);

    printf("PIB per Capta: %.3f\n", pibpercapta);

    printf("Super Poder: %f\n", SuperPoder);
   
    printf("               \n");
   
    
                                      
    
    
    printf("! Carta2 !\n");                                     //carta2
    printf("Estado: %c\n", estado2);
    
    printf("Nome da Cidade: %s\n", nome2);
   
    printf("Código: %s\n", codigo2);
     
    printf("Área em KM²: %.2fKM²\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("População: %lu\n", populacao2);

    printf ("Pontos Turísticos: %d\n", pontosturisticos2);

    printf("Densidade populacional: %.2f\n", densidade2);

    printf("PIB per Capta: %.3f\n", pibpercapta2); 
    
    printf("Super Poder: %f\n", SuperPoder2);
   
    printf("               \n");


    printf("*** Comparação de Cartas ***\n");          // Comparação das cartas e resultado sendo mostrado com if else !
                                                      
    printf("  - População -  \n");

    if(populacao > populacao2){

      printf("Carta 1 Venceu !\n");
    }else{
      printf("Carta 2 Venceu !\n");
    }

   printf(" - Área -  \n");

   if(area > area2){
      printf("Carta 1 Venceu !\n");
   }else{
      printf("Carta 2 Venceu !\n");
   }

   printf("  - PIB -  \n");
   if (pib > pib2){
      printf("Carta 1 Venceu !\n");
   }else{
      printf("Carta 2 Venceu !\n");
   }

   printf(" - Pontos Turísticos - \n");
   if(pontosturisticos > pontosturisticos2){
      printf("Carta 1 Venceu !\n");
   }else{
      printf("Carta 2 Venceu !\n");
   }
   printf(" - Densidade Populacional - \n");
   if(densidade < densidade2){
      printf("Carta 1 Venceu !\n");
   }else{
      printf("Carta 2 Venceu !\n");
   }
   printf(" - Pib Per Capta - \n");
   if (pibpercapta > pibpercapta2){
      printf ("Carta 1 Venceu !\n");
   }else{
      printf("Carta 2 Venceu !\n");
   }
   printf(" - Super Poder - \n");
   if (SuperPoder > SuperPoder2){
      printf("Carta 1 Venceu !\n");
   }else{
      printf("Carta 2 Venceu !\n");
   }
   
  printf("*** Menu de Comparação Super Trunfo! ***\n");
  printf("Escolha um dos atributos para comparar!\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  scanf("%d", &comparacao);

  printf("Comparação entre %s e %s\n", nome, nome2);

  switch (comparacao)
  {
  case 1:
   printf("Atributo Selecionado: População\n");
   printf("%s: %lu\n", nome, populacao);
   printf("%s: %lu\n", nome2, populacao2);
   if (populacao > populacao2){
      printf("O vencedor é: %s\n", nome);
   } else if (populacao2 > populacao){
      printf("O vencedor é: %s\n", nome2);
   }else{
      printf("Empate!\n");
      
   }
   break;

   case 2:
   printf("Atributo Selecionado: Área\n");
   printf("%s: %.2f\n", nome, area);
   printf("%s: %.2f\n", nome2, area2);
   if (area > area2){
      printf("O vencedor é: %s\n", nome);
   } else if (area2 > area){
      printf("O vencedor é: %s\n", nome2);
   } else{
      printf("Empate!\n");
      
   }
   break;

   case 3:
   printf("Atributo Selecionado: PIB\n");
   printf("%s: %.2f\n", nome, pib);
   printf("%s: %.2f\n", nome2, pib2);
   if (pib > pib2){
      printf("O vencedor é: %s\n", nome);
   }else if( pib2 > pib){
      printf("O vencedor é: %s\n", nome2);
   }else{
      printf("Empate!\n");
      
   }
   break;

   case 4:
   printf("Atributo Selecionado: Pontos Turísticos\n");
   printf("%s: %d\n", nome, pontosturisticos);
   printf("%s: %d\n", nome2, pontosturisticos2);
   if(pontosturisticos > pontosturisticos2){
      printf("O vencedor é: %s\n", nome); 
   }else if(pontosturisticos2 > pontosturisticos){
      printf("O vencedor é: %s\n", nome2);
   }else{
      printf("Empate!\n");
   }
   break;

   case 5:
   printf("Atributo Selecionado: Densidade Demográfica\n");
   printf("%s: %f\n", nome, densidade);
   printf("%s: %f\n", nome2,densidade2);
   if(densidade < densidade2){
      printf("O vencedor é: %s\n", nome);
   }else if(densidade2 < densidade){
      printf("O vencedor é: %s\n", nome2);
   }else{
      printf("Empate!\n");
      
   }
   break;
  
  default:
   printf("OPÇÃO INVÁLIDA!\n");
   break;
  }

    


}
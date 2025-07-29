#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    //Estrutura carta 1
    
    int ptsTur1, primeiroAtributo;
    int resultado_attr1 = 0;
    unsigned long int populacao1;
    char estado1; 
    char cidade1[50], codigo1[10];
    double area1, pib1, densidade1, percapita1, superpoder1;
     
  
   //Estrutura carta 2

    int ptsTur2, segundoAtributo;
    int resultado_attr2 = 0;
    int escolhaValidaSegundo = 0;
    unsigned long int populacao2;
    char estado2;
    char cidade2[50], codigo2[10];
    double pib2, area2, densidade2, percapita2, superpoder2;
  
         
      // Início do Jogo

      printf("##### Bem Vindo ao Jogo de Cartas Super Trunfo #####\n\n");


                 // Dados da Carta 1
        
        printf("###Carta 1###\n\n");
        printf("Preencha as informações abaixo: \n");

        printf("Estado (uma letra): ");
        scanf(" %c", &estado1);     // Lê até 1 letra

        printf("Código: "); 
        scanf("%9s", codigo1);    // Lê até 9 letras

        printf("Cidade: ");
        getchar();                             
        fgets(cidade1, sizeof(cidade1), stdin);    // Limpa o buffer do teclado
        cidade1 [strcspn(cidade1, "\n")] = 0;   
        
        printf("População (hab): ");
        scanf("%lu", &populacao1);

        printf("Área (km²): ");
        scanf("%f", &area1);

        printf("PIB (bi): ");
        scanf("%f", &pib1);

        printf("Pontos Turísticos: ");
        scanf("%d", &ptsTur1);

               //Cálculos
       
       densidade1 = (area1 == 0) ? 0.0f : (float)populacao1 / area1;
       float pib1_reais = pib1 * 1000000000.0f;
       float inverso_densidade1 = (densidade1 == 0) ? 0.0f : 1.0f / densidade1;
       percapita1 = (populacao1 == 0) ? 0.0f : (pib1 * 1000000000.0f) / populacao1;
       superpoder1 = (float)populacao1 + area1 + pib1_reais + ptsTur1 + percapita1 + inverso_densidade1 + densidade1;

       

               // Impressão formatada

        printf("\n--- Dados Informados ---\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %lu hab\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f bi\n", pib1);
        printf("Pontos Turísticos: %d\n", ptsTur1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);    // calculado a densidade populacional
        printf("PIB per Capita: %.2f Reais\n", percapita1);     // calculado o PIB per capita
        printf("Super Poder: %.2f\n\n", superpoder1);

         
    


       // Dados carta 2

        printf("**Carta 2**\n\n");
        printf("Preencha as informações abaixo: \n");

        printf("Estado (uma letra): ");
        scanf(" %c", &estado2);     // Lê até 1 letra

        printf("Código: ");
        scanf("%9s", codigo2);    // Lê até 9 letras

        printf("Cidade: ");
        getchar();           
        fgets(cidade2, sizeof(cidade2), stdin);  // Limpa o buffer do teclado 
        cidade2 [strcspn(cidade2, "\n")] = 0;   

        printf("População (hab): ");
        scanf("%lu", &populacao2);

        printf("Área (km²): ");
        scanf("%f", &area2);

        printf("PIB (bi): ");
        scanf("%f", &pib2);

        printf("Pontos Turísticos: ");
        scanf("%d", &ptsTur2);

                 //Cálculos

       densidade2 = (area2 == 0) ? 0.0f : (float)populacao2 / area2;
       float pib2_reais = pib2 * 1000000000.0f;
       float inverso_densidade2 = (densidade2 == 0) ? 0.0f : 1.0f / densidade2;
       percapita2 = (populacao2 == 0) ? 0.0f : (pib2 * 1000000000.0f) / populacao2;
       superpoder2 = (float)populacao2 + area2 + pib2_reais + ptsTur2 + percapita2 + inverso_densidade2 + densidade2;



                // Impressão formatada

        printf("\n--- Dados Informados ---\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %lu hab\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PIB: %.2f bi\n", pib2);
        printf("Pontos Turísticos: %d\n", ptsTur2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);    // calculado a densidade populacional
        printf("PIB per Capita: %.2f reais\n", percapita2);     // calculado o Pib per capita
        printf("Super Poder: %.2f\n\n", superpoder2);

       

        //Comparação entre atributos das cartas

        printf("Caso a carta vencedora vença o atributo ficará com (1) para verdadeiro e (0) para falso.\n\n");
        printf("População: Carta1 venceu (%d)\n", populacao1 > populacao2);
        printf("Área: Carta1 venceu (%d)\n", area1 > area2);
        printf("PIB: Carta1 venceu (%d)\n", pib1 > pib2);
        printf("Pontos Turísticos: Carta1 venceu (%d)\n", ptsTur1 > ptsTur2);
        printf("Densidade Populacional: Carta2 venceu (%d)\n", densidade1 < densidade2);
        printf("PIB per Capita: Carta1 venceu (%d)\n", percapita1 > percapita2);
        printf("Super Poder: Carta1 venceu (%d)\n\n", superpoder1 > superpoder2);

           //Resultado da carta ganhadora
        
            printf("Comparação da carta - Atributo: PIB per Capita");

           if (percapita1 > percapita2){
             printf("A Carta1 (%s) Venceu com R$(%.2f) reais\n", cidade1, percapita1);  
           } else {
             printf("A Carta 2 (%s) Venceu com R$(%.2f) reais\n\n", cidade2, percapita2);
        }
             printf("Comparação da carta - Atributo: Densidade Populacional");

             if (populacao1 > populacao2){
             printf("A Carta1 (%s) Venceu com (%lu) habitantes\n", cidade1, populacao1);  
           } else {
             printf("A Carta 2 (%s) Venceu com (%lu) habitantes\n\n", cidade2, populacao2);
        }

        // Menu interativo

        printf("Escolha o primeiro atributo: \n\n");
        printf("1. Estado (apenas informativo)\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Pontos Turísticos\n");
        printf("6. Densidade Demográfica\n\n");
       

        printf("Comparado: \n");
        printf("Estado: %c (apenas informativo)\n", estado1);
        printf("Cidade 1: %s\n", cidade1);
        printf("Estado: %c (apenas informativo)\n", estado2);
        printf("Cidade 2: %s\n\n", cidade2);
        printf("Escolha a comparação: ");
        scanf(" %d", &primeiroAtributo);


        switch (primeiroAtributo)   {
        case 1:
          printf("Nome do Estado carta1: %s carta 2: %s\n", cidade1, cidade2);
          printf("Atributo não comparável. Apenas Informativo.\n");
          break;
        
          case 2:
          printf("População carta 1: %lu  carta 2: %lu\n", populacao1, populacao2);
          if (populacao1 > populacao2) {
            printf("Vencedor Carta 1 (%s)\n\n", cidade1);
            resultado_attr1 = 1;                           // carta 1 venceu
          } else if (populacao2 > populacao1) {
            printf("Vencedor Carta 2 (%s)\n\n", cidade2);
            resultado_attr1 = 2;                           // carta 2 venceu
          } else {
            printf("Empate!\n\n");
            resultado_attr1 = 0;                           // Empate
          }
          break;  
          
        case 3:
          printf("Área carta 1: (%.2f) carta 2: (%.2f)\n", area1, area2);
          if (area1 > area2) {
            printf("Vencedor Carta 1 (%s)\n\n", cidade1);
             resultado_attr1 = 1;                            // carta 1 venceu
          } else if (area2 > area1) {
            printf("Vencedor Carta 2 (%s)\n\n", cidade2);
             resultado_attr1 = 2;                                
          } else {
            printf("Empate!\n\n");
             resultado_attr1 = 0;                                     
          }
          break;
        
        case 4:
          printf("PiB carta 1: (%.2f)  carta 2: (%.2f)\n", pib1, pib2);
          if (pib1 > pib2) {
            printf("Vencedor Carta 1: (%s)\n\n", cidade1);
            resultado_attr1 = 1;                                    // carta 1 venceu   
          } else if (pib2 > pib1) {
            printf("Vencedor carta 2: (%s)\n\n", cidade2);
            resultado_attr1 = 2;                                    // carta 2 venceu 
          } else {
            printf("Empate!\n\n");
            resultado_attr1 = 0;                                   // Empate        
          }
          break;

        case 5:
          printf("Pontos Turísticos carta 1: (%d) carta 2: (%d)\n", ptsTur1, ptsTur2);
          if (ptsTur1 > ptsTur2) {
            printf("Vencedor Carta 1: (%s)\n\n", cidade1);
            resultado_attr1 = 1;                                     // carta 1 venceu       
          } else if (ptsTur2 > ptsTur1) {
            printf("Vencedor Carta 2: (%s)\n\n", cidade2);
            resultado_attr1 = 2;                                      // carta 2 venceu 
          } else{
            printf("Empate!\n\n");
            resultado_attr1 = 0;                                    // Empate
          }
          break;

        case 6:
          printf("Densidade Demográfica Carta 1: (%.2f) carta 2: (%.2f)\n\n", densidade1, densidade2);
          if (densidade1 < densidade2) {
            printf("Vencedor Carta 1: (%s)[menor densidade vence!]\n\n", cidade1);
            resultado_attr1 = 1;                                                    // carta 1 venceu         
          } else if (densidade2 < densidade1) {
            printf("Vencedor carta 2: (%s)[menor densidade vence!]\n\n", cidade2);
            resultado_attr1 = 2;                                                    // carta 2 venceu    
          } else {
            printf("Empate!\n\n");
            resultado_attr1 = 0;                                                    // Empate       
          }
          break;
        
        default:
          printf("Opção Inválida! Tente Novamente.\n\n");
          break;
        
        }

           // escolha do segundo atributo

           do{

         printf("Escolha o segundo atributo: \n");
         printf("1. Estado (apenas informativo)\n");
         printf("2. População\n");
         printf("3. Área\n");
         printf("4. PIB\n");
         printf("5. Pontos Turísticos\n");
         printf("6. Densidade Demográfica\n\n");
         printf("Escolha a comparação: ");
         scanf(" %d", &segundoAtributo);

        if (segundoAtributo == primeiroAtributo){
           printf("Você escolheu o mesmo atributo, escolha outro atributo diferente!");
        } else if (segundoAtributo < 1 || segundoAtributo > 6) {
            printf("Opção inválida! Escolha um número entre 1 e 6.\n\n");
        } else {
            escolhaValidaSegundo = 1;
        } 
        } while (!escolhaValidaSegundo);  

          switch (segundoAtributo) {
          case 1:
          printf("Estado carta1: %s carta 2: %s\n", cidade1, cidade2);
          printf("Atributo não comparável. Apenas Informativo.\n");
          break;
        
          case 2:
          printf("População carta 1: %lu  carta 2: %lu\n", populacao1, populacao2);
          if (populacao1 > populacao2) {
            printf("Vencedor Carta 1 (%s)\n\n", cidade1);
            resultado_attr2 = 1;                                     // carta 1 venceu
          } else if (populacao2 > populacao1) {
            printf("Vencedor Carta 2 (%s)\n\n", cidade2);
            resultado_attr2 = 2;                                     // carta 2 venceu        
          } else {
            printf("Empate!\n\n");
            resultado_attr2 = 0;                                     // Empate          
          }
          break;  
          
        case 3:
          printf("Área carta 1: (%.2f) carta 2: (%.2f)\n", area1, area2);
          if (area1 > area2) {
            printf("Vencedor Carta 1 (%s)\n\n", cidade1);
             resultado_attr2 = 1;                                // carta 1 venceu
          } else if (area2 > area1) {
            printf("Vencedor Carta 2 (%s)\n\n", cidade2);
            resultado_attr2 = 2;                                 // carta 2 venceu   
          } else {
            printf("Empate!\n\n");
            resultado_attr2 = 0;                                 // Empate    
          }
          break;
        
        case 4:
          printf("PiB carta 1: (%.2f)  carta 2: (%.2f)\n", pib1, pib2);
          if (pib1 > pib2) {
            printf("Vencedor Carta 1: (%s)\n\n", cidade1);
            resultado_attr2 = 1;   
          } else if (pib2 > pib1) {
            printf("Vencedor carta 2: (%s)\n\n", cidade2);
            resultado_attr2 = 2; 
          } else {
            printf("Empate!\n\n");
            resultado_attr2 = 0;
          }
          break;

        case 5:
          printf("Pontos Turísticos carta 1: (%d) carta 2: (%d)\n", ptsTur1, ptsTur2);
          if (ptsTur1 > ptsTur2) {
            printf("Vencedor Carta 1: (%s)\n\n", cidade1);
            resultado_attr2 = 1;                                   // carta 1 venceu          
          } else if (ptsTur2 > ptsTur1) {
            printf("Vencedor Carta 2: (%s)\n\n", cidade2);
            resultado_attr2 = 2;                                  // carta 2 venceu          
          } else {
            printf("Empate!\n\n");
            resultado_attr2 = 0;                                  // Empate 
          }
          break;

        case 6:
          printf("Densidade Demográfica Carta 1: (%.2f) carta 2: (%.2f)\n\n", densidade1, densidade2);
          if (densidade1 < densidade2) {
            printf("Vencedor Carta 1: (%s)[menor densidade vence!]\n\n", cidade1);
            resultado_attr2 = 1;
          } else if (densidade2 < densidade1) {
            printf("Vencedor carta 2: (%s)[menor densidade vence!]\n\n", cidade2);
            resultado_attr2 = 2;
          } else {
            printf("Empate!\n\n");
            resultado_attr2 = 0;
          }
          break;

          default:
          printf("Opção Inválida!\n\n");
          break;
        }
          
            printf("--- Resultado FINAL da Rodada ---\n\n");    

          if (resultado_attr1 == 1 && resultado_attr2 == 1) {                    
            printf("Parabéns! A Carta 1 (%s) venceu a rodada!\n", cidade1);                
        } else if (resultado_attr1 == 2 && resultado_attr2 == 2) {                    
            printf("Infelizmente, a Carta 2 (%s) venceu a rodada!\n", cidade2);                
        } else {                    
            printf("A rodada terminou em EMPATE!\n");                
        

            return 0;
        
        }

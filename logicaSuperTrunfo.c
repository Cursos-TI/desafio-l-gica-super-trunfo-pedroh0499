#include <stdio.h>
int main(){
        
    int estado1, estado2;
      char codigo1[20], codigo2[20];
      char nome1[20], nome2[20];
      int populacao1, populacao2;
      float area1, area2;
      float pib1, pib2;
      int pontos1, pontos2;

      int carta1, carta2;
      carta1 = resultado(populacao1, area1, pib1, pontos1);
      carta2 = resultado(populacao2, area2, pib2, pontos2);

       printf("Estado 1: \n");
         scanf("%d", &estado1);

       printf("Código da Carta 1: \n");
         scanf("%s", codigo1);

       printf("Nome da Cidade 1: \n");
         scanf("%c", &nome1);

       printf("População da carta 1: \n");
         scanf("%d", &populacao1);

       printf("Área da carta 1: \n");
         scanf("%f", &area1);

       printf("PIB da carta 1: \n");
         scanf("%f", &pib1);

         printf("Número de Pontos Turísticos da carta 1: \n");
            scanf ("%d", &pontos1);

            printf("Estado: %d\n", estado1);
            printf("Código da Carta: %s\n", codigo1);
            printf("Nome da cidade: %c\n", nome1);
            printf("População: %d\n", populacao1);
            printf("Área: %f\n", area1);
            printf("PIB: %f\n", pib1);
            printf("Número de pontos turísticos: %d\n", pontos1);
            printf("Estado: \n");
            scanf("%d", &estado1);
   
          printf("Código da Carta 2: \n");
            scanf("%s", codigo2);
   
          printf("Nome da Cidade da carta 2: \n");
            scanf("%c", &nome2);
   
          printf("População da carta 2: \n");
            scanf("%d", &populacao2);
   
          printf("Área da carta 2: \n");
            scanf("%f", &area2);
   
          printf("PIB da carta 2: \n");
            scanf("%f", &pib2);
   
            printf("Número de Pontos Turísticos da carta 2: \n");
               scanf ("%d", &pontos2);
   
               printf("Estado: %d\n", estado2);
               printf("Código da Carta: %s\n", codigo2);
               printf("Nome da cidade: %c\n", nome2);
               printf("População: %d\n", populacao2);
               printf("Área: %f\n", area2);
               printf("PIB: %f\n", pib2);
               printf("Número de pontos turísticos: %d\n", pontos2);
        
        printf("Resultado da carta 1: %d\n", carta1);
        printf("Resultado da carta 2: %d\n", carta2);

        if (carta1 > carta2) {
            printf("A carta 1 é a vencedora\n");
        } else {
            printf("A carta 2 é a vencedora\n");
        }
    
        return 0;
    }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao, opcao2, opcao3;
    char estado1[2], estado2[2];
    char codigo1[4], codigo2[4]; 
    char nome1[50], nome2[50]; 
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    int resultado1, resultado2;
   
        
    //os nomes foram abreviados para não dar muito trabalho para escrever o código//

    printf("__BEM VINDO AO SUPER TRUNFO__\n\n");
    printf("O que deseja fazer?\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("_Comece Informando Os Dados Da Carta 01_\n");
    printf("Digite seu estado: ");
    scanf(" %s", estado1);
    printf("Digite seu codigo: ");
    scanf("%s", codigo1); 
    printf("Digite o nome da sua cidade: ");
    scanf("%s", nome1); 
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao1);
    printf("Digite sua area: ");
    scanf("%f", &area1);
    printf("Digite seu PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos presentes em sua cidade: ");
    scanf("%d", &turismo1);

    //aqui começa a inserção da carta 2//
    printf("_Agora Insira Os Dados Da Carta 02_\n");
    getchar();

    printf("Digite seu estado: ");
    scanf(" %s", estado2);
    printf("Digite seu codigo: ");
    scanf("%s", codigo2);
    printf("Digite o nome da sua cidade: ");
    scanf("%s", nome2); 
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao2);
    printf("Digite sua area: ");
    scanf("%f", &area2);
    printf("Digite seu PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos presentes em sua cidade: ");
    scanf("%d", &turismo2);

    //aqui vamos fazer os calculos da densidade populacional e do pib per capita

    float densi1 = (float) populacao1 / area1;
    float densi2 = (float) populacao2 / area2; //a função da densidade populacional foi abreviada para poder ser melhor na hora de codar
    float cap1 = (float) pib1 / populacao1;
    float cap2 = (float) pib2 / populacao2; //a mesma coisa de aplica ao pib per capita
    float super1 = (float) populacao1 + area1 + pib1 + turismo1 + densi1 + cap1; 
    float super2 = (float) populacao2 + area2 + pib2 + turismo2 + densi2 + cap2; 

    //agora começa a exibição dos dados da carta 01//
  
    printf("__DADOS DA CARTA 01__\n\n");
    printf("Seu estado e: %s\n", estado1);
    printf("Seu codigo e: %s\n", codigo1);
    printf("Sua cidade e: %s\n", nome1);
    printf("O numero da sua populacao e: %d\n", populacao1);
    printf("O numero da sua area e: %.3f\n", area1);
    printf("Seu PIB e: %.3f\n", pib1);
    printf("O numero de pontos turisticos e: %d\n", turismo1);
    printf("Sua densidade populacional e: %.3f\n", densi1);
    printf("Seu PIB per capita e: %.3f\n", cap1);
    printf("Seu Super Poder e de: %.3f\n", super1);

    //agora vamos exibir a carta 02
    printf("__DADOS DA CARTA 02__\n\n");
    printf("Seu estado e: %s\n", estado2);
    printf("Seu codigo e: %s\n", codigo2);
    printf("Sua cidade e: %s\n", nome2);
    printf("O numero da sua populacao e: %d\n", populacao2);
    printf("O numero da sua area e: %.3f\n", area2);
    printf("Seu PIB e: %.3f\n", pib2);
    printf("O numero de pontos turisticos e: %d\n", turismo2);
    printf("Sua densidade populacional e: %.3f\n", densi2);
    printf("Seu PIB per capita e: %.3f\n", cap2);
    printf("Seu Super Poder e de: %.3f\n", super2);

    // Comparação de dois atributos escolhidos
    int escolha1, escolha2;
    int pontos1 = 0, pontos2 = 0;

    printf("\nAgora escolha dois atributos para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");

    printf("Digite o numero do primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("Digite o numero do segundo atributo: ");
    scanf("%d", &escolha2);
    if(escolha1 == escolha2){
      printf("Nao pode escolher o mesmo atributo mais de uma vez!\n");
    } else {

    // Função de comparação dos atributos
    for (int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? escolha1 : escolha2;

        switch (atributo) {
            case 1:
                if (populacao1 > populacao2) pontos1++;
                else if (populacao2 > populacao1) pontos2++;
                break;
            case 2:
                if (area1 > area2) pontos1++;
                else if (area2 > area1) pontos2++;
                break;
            case 3:
                if (pib1 > pib2) pontos1++;
                else if (pib2 > pib1) pontos2++;
                break;
            case 4:
                if (turismo1 > turismo2) pontos1++;
                else if (turismo2 > turismo1) pontos2++;
                break;
            case 5:
                if (densi1 > densi2) pontos1++;
                else if (densi2 > densi1) pontos2++;
                break;
            case 6:
                if (cap1 > cap2) pontos1++;
                else if (cap2 > cap1) pontos2++;
                break;
            default:
                printf("Atributo invalido: %d\n", atributo);
        }
    }

    // Resultado baseado nos dois atributos escolhidos
    printf("\n__RESULTADO DA COMPARACAO DOS ATRIBUTOS__\n");
    if (pontos1 > pontos2) {
        printf("A CARTA 01 VENCEU POR %d A %d!\n", pontos1, pontos2);
    } else if (pontos2 > pontos1) {
        printf("A CARTA 02 VENCEU POR %d A %d!\n", pontos2, pontos1);
    } else {
        printf("EMPATE! Ambos os jogadores venceram 1 atributo.\n");
    }
  }
    case 2:
    printf("Fechando o Jogo...");
    return 0;
        break;
    
    default:
    printf("Opcao invalida! Fechando o jogo!");
        break;
    }
  
   

    return 0;
}

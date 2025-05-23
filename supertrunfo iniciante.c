#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[4], codigo2[4]; 
    char nome1[50], nome2[50]; 
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
   
        
    //os nomes foram abreviados para não dar muito trabalho para escrever o código//

    printf("__BEM VINDO AO SUPER TRUNFO__\n\n");

    //aqui começa a inserção de dados da carta 1//

    printf("_Comece Informando Os Dados Da Carta 01_\n");
    printf("Digite seu estado: ");
    scanf("%c", &estado1);
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
    scanf("%c", &estado2);
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
    printf("Seu estado e: %c\n", estado1);
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
    printf("Seu estado e: %c\n", estado2);
    printf("Seu codigo e: %s\n", codigo2);
    printf("Sua cidade e: %s\n", nome2);
    printf("O numero da sua populacao e: %d\n", populacao2);
    printf("O numero da sua area e: %.3f\n", area2);
    printf("Seu PIB e: %.3f\n", pib2);
    printf("O numero de pontos turisticos e: %d\n", turismo2);
    printf("Sua densidade populacional e: %.3f\n", densi2);
    printf("Seu PIB per capita e: %.3f\n", cap2);
    printf("Seu Super Poder e de: %.3f\n", super2);

    //hora de comparar as cartas

    printf("__Comparacao das cartas__\n");
    printf("Populacao: Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos turisticos: Carta 1 venceu? %d\n", turismo1 > turismo2);
    printf("Densidade populacional: Carta 1 venceu? %d\n", densi1 < densi2);
    printf("PIB per capita: Carta 1 venceu? %d\n", cap1 > cap2);
    printf("Super poder: Carta 1 venceu? %d\n", super1 > super2);

    return 0;
}
#include<stdio.h>

int main(){
    //CARTA 1

    char estado;
    char codigo[10];
    char cidade[50]; 
   unsigned long int  populaçao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapital;
    float superpoder;
    float densidade;

    //CARTA 2 
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapital2;
    float superpoder2;
    float densidade2;


//===========CARTA1=========
printf("\n====Cadastro da carta1 ====\n");

    printf("Digite seu estado: \n");
    scanf(" %c", &estado);

    printf("Digite a letra do estado e em seguida o codigo 01 a 04: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s",cidade);

    printf("Digite o numero da populaçao: \n");
    scanf("%lu", &populaçao);

    printf("Digite a Area em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o numero de pontos turistico; ");
    scanf("%d",&pontosturisticos);

    densidade=(float)populaçao / area;
    pibpercapital= pib / (float)populaçao;
    superpoder= populaçao+area+pib+pontosturisticos+ pibpercapital+ (1/densidade);


    //========CARTA 2=====
    printf("Digite seu estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado e em seguida o codigo 01 a 04: \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s",cidade2);

    printf("Digite o numero da populaçao: \n");
    scanf("%lu", &populaçao2);

    printf("Digite a Area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turistico; ");
    scanf("%d",&pontosturisticos2);

    densidade2=(float)populaçao2/area2;
    pibpercapital2=pib2/(float)populaçao2;
    superpoder2= populaçao2 + area2 + pib2 + pontosturisticos2 + pibpercapital2+ (1/densidade2);


       //==========SAÍDA========
    printf("\n=====CARTAS CADASTRADAS======");

    printf("\n--- Carta 1 ---\n");
    printf("Estado:%c\n", estado);
    printf("Codigo:%s\n", codigo);
    printf("cidade:%s\n", cidade);
    printf("Populaçao:%lu\n", populaçao);
    printf("Area em km²:%.2f km²\n", area);
    printf("PIB:%2f bilhoes de reais\n", pib);
    printf("Numeros de pontos turisticos:%d\n", pontosturisticos);
    printf ("Densidade populaciona: %.2f\n", densidadepopulacional);
    printf("Pib per capita: %.2f\n", pibpercapital);


    printf("\n--- Carta 2 ---\n");
    printf("Estado:%c\n", estado2);
    printf("Codigo:%s\n", codigo2);
    printf("cidade:%s\n", cidade2);
    printf("Populaçao:%lu\n", populaçao2);
    printf("Area em km²:%.2f km²\n", area2);
    printf("PIB:%.2f bilhoes de reais\n", pib2);
    printf("Numeros de pontos turisticos:%d\n", pontosturisticos2);
    printf ("Densidade populaciona: %.2f\n", densidadepopulacional2);
    printf("Pib per capita: %.2f\n", pibpercapital2);

     printf("\n=== Comparacao ===\n");

    printf("Populacao: %lu\n", populaçao > populaçao2);
    printf("Area: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos > pontosturisticos2);
    printf("Densidade: %d\n", densidade < densidade2);
    printf("PIB per Capita: %d\n", pibpercapital > pibpercapital2);
    printf("Super Poder: %d\n", superpoder > superpoder2);





    



    return 0;

}

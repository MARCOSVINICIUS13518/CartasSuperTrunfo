#include<stdio.h>

int main(){
    //CARTA 1

    char estado;
    char codigo[10];
    char cidade[50];
    int  populaçao;
    float area;
    float pib;
    int pontosturisticos;

    //CARTA 2 
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;

//===========CARTA1=========
printf("\n====Cadastro da carta1 ====\n");

    printf("Digite seu estado: \n");
    scanf("%c", &estado);

    printf("Digite a letra do estado e em seguida o codigo 01 a 04: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o numero da populaçao: \n");
    scanf("%d", &populaçao);

    printf("Digite a Area em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o numero de pontos turistico; ");
    scanf("%d",&pontosturisticos);

    //========CARTA 2=====
    printf("Digite seu estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado e em seguida o codigo 01 a 04: \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o numero da populaçao: \n");
    scanf("%d", &populaçao2);

    printf("Digite a Area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turistico; ");
    scanf("%d",&pontosturisticos2);



       //==========SAÍDA========
    printf("\n=====CARTAS CADASTRADAS======");

    printf("\n--- Carta 1 ---\n");
    printf("Estado:%c\n", estado);
    printf("Codigo:%s\n", codigo);
    printf("cidade:%s\n", cidade);
    printf("Populaçao:%d\n", populaçao);
    printf("Area em km²:%2f km²\n", area);
    printf("PIB:%2f bilhoes de reais\n", pib);
    printf("Numeros de pontos turisticos:%d", pontosturisticos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado:%c\n", estado2);
    printf("Codigo:%s\n", codigo2);
    printf("cidade:%s\n", cidade2);
    printf("Populaçao:%d\n", populaçao2);
    printf("Area em km²:%2f km²\n", area2);
    printf("PIB:%2f bilhoes de reais\n", pib2);
    printf("Numeros de pontos turisticos:%d", pontosturisticos2);



    return 0;


}
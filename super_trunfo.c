#include <stdio.h>

 int main(){
    char estado;
    char código[25];
    char cidade[100];
    int população;
    float área;
    float pib;
    int pontos;
    int carta;
    
    printf("CARTA 1\n");

    printf("Estado:");
    scanf( "%c", &estado);

    printf("Códgo:");
    scanf("%s", código);

    printf("Nome da Cidade:");
    scanf("%s" , &cidade);

    printf("População:");
    scanf("%f", &população);

    printf( "Área:");
    scanf( "%f", &área);

    printf( "Pib:");
    scanf( "%f", &pib);

    printf("Números de Pontos Turísticos:");
    scanf( "%d", &pontos);

   printf("\n");

    printf("CARTA 2\n");

    printf("Estado:");
    scanf("%s", &estado);

    printf("Códgo:");
    scanf("%s", código);

    printf("Nome da Cidade:");
    scanf("%s" , &cidade);

    printf("População:");
    scanf("%f", &população);

    printf("Área:");
    scanf("%e", &área);

    printf("Pib:");
    scanf("%f", &pib);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pontos); 
    
    return 0;
}

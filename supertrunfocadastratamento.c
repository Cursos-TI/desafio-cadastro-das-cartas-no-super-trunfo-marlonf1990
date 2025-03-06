#include <stdio.h>
int main () {

// variaveis de jogadores

char codigo1[32],codigo2[32];
float pib1,area1,pib2,area2,populacao1,populacao2;
int pontos_turisticos1,pontos_turisticos2;
int estado1,estado2,cidade1,cidade2;
int pais1,pais2;
//Cadastramento de Cartas dos jogares

//jogador 1

printf("Codigo da carta Jogador 1 (ex a001) :");
scanf("%s",&codigo1);
printf("Pais :");
scanf("%s",&pais1);
printf("Estado : ");
printf("Cidade :");
scanf("%s",&cidade1);
scanf("%s",&estado1);
printf("Area da cidade (em km²) :");
scanf("%s",&area1);
printf("Populaçao da cidade :");
scanf("%e",&populacao1);
printf("Pontos turisticos :");
scanf("%d",&pontos_turisticos1);
printf("PIB da cidade (ex 3.252) :");
scanf("%d",&pib1);

//jogador 2

printf("Codigo da carta Jogador 2 (ex b002)\n :");
scanf("%s",&codigo2);
printf("Pais :");
scanf("%s",&pais2);
printf("Cidade :");
scanf("%s",&cidade2);
printf("Estado : ");
scanf("%s",&estado2);
printf("Area da cidade (em km²) :");
scanf("%s",&area2);
printf("Populaçao da cidade :");
scanf("%e",&populacao2);
printf("Pontos turisticos :");
scanf("%d",&pontos_turisticos2);
printf("PIB da cidade (ex3.112) :");
scanf("%d",&pib2);

return 0;
}
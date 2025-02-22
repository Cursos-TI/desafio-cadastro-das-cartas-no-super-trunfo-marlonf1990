#include <stdio.h>
int main () {

// variaveis de jogadores

char codigo1[32],codigo2[32];
float pib1,area1,pib2,area2,populacao1,populacao2;
int pontos_turisticos1,pontos_turisticos2;
int estado1,estado2;
int pais1,pais2;
//Cadastramento de Cartas dos jogares

//jogador 1

printf("Codigo da carta Jogador 1 \n Cod (ex a001) :");
scanf("%s",&codigo1);
printf("Pais :");
scanf("%s",&pais1);
printf("Estado : ");
scanf("%s",&estado1);
printf("Area da cidade (ex 1.546) :");
scanf("%s",&area1);
printf("Populaçao da cidade :");
scanf("%e",&populacao1);
printf("Pontos turisticos :");
scanf("%d",&pontos_turisticos1);
printf("PIB da cidade (ex 3.252) :");
scanf("%d",&pib1);

//jogador 2

printf("Codigo da carta Jogador 2 \n Cod (ex a002) :");
scanf("%s",&codigo2);
printf("Pais :");
scanf("%s",&pais2);
printf("Estado : ");
scanf("%s",&estado2);
printf("Area da cidade (ex 1.546) :");
scanf("%s",&area2);
printf("Populaçao da cidade :");
scanf("%e",&populacao2);
printf("Pontos turisticos :");
scanf("%d",&pontos_turisticos2);
printf("PIB da cidade (ex3.112) :");
scanf("%d",&pib2);

// Comparativos dos Jogares

if (pontos_turisticos1 < pontos_turisticos2){
    printf(" Jogador 1 venceu! \n");
 } else {
    printf("Jogador 2 venceu! \n");
 }

 if (area1 < area2){
    printf(" Jogador 1 venceu! \n");
 } else {
    printf("Jogador 2 venceu! \n");
 }
 if (populacao1 < populacao2){
    printf(" Jogador 1 venceu! \n");
 } else {
    printf("Jogador 2 venceu! \n");
 }
 if (pib1 < pib2){
    printf(" Jogador 1 venceu! \n");
 } else {
    printf("Jogador 2 venceu! \n");
 }
 
// Solicita ao usuário o número de acertos de cada jogador

printf("Digite o número de acertos do Jogador 1: ");
scanf("%d", &codigo1);
printf("Digite o número de acertos do Jogador 2: ");
scanf("%d", &codigo2);

// Compara os acertos e exibe o resultado
if (codigo1 > codigo2) {
    printf("O Jogador 1 teve mais acertos  (%d > %d)!\n", codigo1, codigo2);
 } else if (codigo2 > codigo1) {
    printf("O Jogador 2 teve mais acertos (%d > %d)!\n", codigo2, codigo1);
 
 }


 return 0;
}

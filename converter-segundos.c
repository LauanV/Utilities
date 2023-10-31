#include <stdio.h>
#include <conio.h>

int main(){

    int segundosTotal, segundos = 0, minutos = 0, horas = 0;

    printf("Informe os segundos para conversao:\n");
    scanf("%d", &segundosTotal);

    segundos = segundosTotal; // Determinando uma segunda variável para guardar o valor dos segundos para que no final eu possa informar os segundos totais informados inicialmente pelo usuário;

    while(segundos >= 60){ // Enquanto houver mais de 60 segundos o comando vai converter esses 60 segundos em 1 minuto;

        minutos ++;

        segundos = segundos - 60; // Diminui 60 segundos dos segundos totais já que já foram convertidos em 1 minuto;

    }
    while(minutos >= 60){ // Enquanto houver mais de 60 minutos o programa irá rodar e converter os 60 minutos em 1 hora;

        horas++;

        minutos = minutos - 60; // Diminui 60 minutos dos minutos totais (caso tenha entrado e executado os comandos do while;

    }

    system("cls"); // Limpando a tela do usuário;

    printf("%d segundos equivale a %d horas, %d minutos e %d segundos.", segundosTotal, horas, minutos, segundos);
    
    getch();
    
}

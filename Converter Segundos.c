#include <stdio.h>
#include <conio.h>

int main(){

    int segundosTotal, segundos = 0, minutos = 0, horas = 0;

    printf("Informe os segundos para conversao:\n");
    scanf("%d", &segundosTotal);

    segundos = segundosTotal;

    while(segundos >= 60){

        minutos ++;

        segundos = segundos - 60;

    }
    while(minutos >= 60){

        horas++;

        minutos = minutos - 60;

    }

    system("cls");

    printf("%d segundos equivale a %d horas, %d minutos e %d segundos.", segundosTotal, horas, minutos, segundos);
    
    getch();
    
}
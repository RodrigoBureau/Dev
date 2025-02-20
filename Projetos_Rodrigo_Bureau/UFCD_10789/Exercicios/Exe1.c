#include <stdio.h>

int main(){
    int segundos;
    int horas;
    int minutos;
    printf("Diga os segundos para transformar em horas, minutos e segundos: ");
    scanf("%d", &segundos);
    if(segundos>=3600){
        for(int i=1; segundos>=3600;i++){
            horas = i;
            segundos= segundos - 3600;
        }
    }
    if(segundos>=60){
        for(int i=1; segundos>=60;i++){
            minutos = i;
            segundos= segundos - 60;
        }
    }
    printf("As horas: %d, os minutos %d e os segundos %d", horas, minutos, segundos);
}

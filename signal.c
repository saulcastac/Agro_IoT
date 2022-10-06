#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void hola (int signalNumb){
    printf("Recibí la señal %d", signalNumb);
}

int comd;
void terminarWhile(int signalNumb){
    printf("Terminando while ");
    comd = 0;
}

int main(){
    signal(12, terminarWhile);
    comd = 1;

    while(comd == 1){
        printf("trabajando\n");
        sleep(1);
    }

    printf("Aquí nunca llega");
    return 0;
}